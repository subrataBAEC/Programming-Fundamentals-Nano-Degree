/*
Q 6-complete
this returns the inverted tree Node

1 2 3 -1 -1 4 6 -1 -1 -1 -1
1 2 3 -1 -1 -1 -1
4 2 7 1 3 6 9 -1 -1 -1 -1 -1 -1 -1 -1

logic:
- swap left-right child pointers then
- recursive call
- check if eveything is ok with print function

https://afteracademy.com/blog/invert-a-binary-tree

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

void print(treeNode *root)
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
            cout << presentNode->val << " ";
            // r.push(presentNode->val);

            if (presentNode->left != NULL)
            {
                q.push(presentNode->left); // l
            }
            if (presentNode->right != NULL)
            {
                q.push(presentNode->right); // r
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
    // while (!r.empty())
    // {
    //     cout << r.front() << " ";
    //     r.pop();
    // }
}

treeNode *invert_tree(treeNode *root)
{
    if (root == NULL)
    {
        return root;
    }

    // swap left-right
    treeNode *temp = root->left;
    root->left = root->right;
    root->right = temp;

    // recursive call
    invert_tree(root->left);
    invert_tree(root->right);
    return root;
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
    treeNode *root2 = invert_tree(root);
    //check
    print(root2);
}