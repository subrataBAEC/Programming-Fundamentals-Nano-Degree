/*
(do not submit)
Q 6-complete
this only prints in reverse

1 2 3 -1 -1 4 6 -1 -1 -1 -1
logic:

*/

#include <bits/stdc++.h>
using namespace std;

class treeNode
{
public:
    int val;
    treeNode *left;
    treeNode *right;

    // constructor
    treeNode(int val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};
// 1 2 3 -1 -1 -1 -1
// 4 2 7 1 3 6 9 -1 -1 -1 -1 -1 -1 -1 -1
void invert_tree(treeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<treeNode *> q;
    q.push(root);
    q.push(NULL);

    queue<int> r;

    while (!q.empty())
    {
        treeNode *presentNode = q.front();
        q.pop();

        if (presentNode != NULL)
        {
            // cout<<presentNode->val<<" ";
            r.push(presentNode->val);

            if (presentNode->left != NULL)
            {
                q.push(presentNode->right); // r
            }
            if (presentNode->right != NULL)
            {
                q.push(presentNode->left); // l
            }
        }
        else
        {
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
    }
    while (!r.empty())
    {
        cout<<r.front()<<" ";
        r.pop();
    }
}

int main()
{
    int a;
    cin >> a;
    treeNode *root = new treeNode(a);

    queue<treeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        treeNode *presesentNode = q.front();
        q.pop();
        int x, y;
        cin >> x >> y;

        treeNode *n1 = NULL;
        treeNode *n2 = NULL;

        if (x != -1)
        {
            n1 = new treeNode(x);
        }
        if (y != -1)
        {
            n2 = new treeNode(y);
        }
        presesentNode->left = n1;
        presesentNode->right = n2;

        if (n1 != NULL)
        {
            q.push(n1);
        }

        if (n2 != NULL)
        {
            q.push(n2);
        }
    }
    invert_tree(root);
}