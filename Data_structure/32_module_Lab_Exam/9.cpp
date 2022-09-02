/*
Q 9-complete

1 1 1 1 1 -1 1-1 -1 -1 -1 -1 -1

2 2 2 5 2 -1 -1 -1 -1 -1 -1

logic: traverse and save all values to a queue
save the root value from queue
compare each value with  root value, if not match, break and return false.

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
bool is_unival(treeNode *root)
{
    if (root == NULL)
    {
        return true;
    }
    queue<treeNode *> q;
    q.push(root);
    q.push(NULL);

    queue<int> v;

    while (!q.empty())
    {
        treeNode *presentNode = q.front();
        q.pop();
        if (presentNode != NULL)
        {
            // cout << presentNode->val << " ";
            v.push(presentNode->val);

            if (presentNode->left != NULL) // left first
            {
                q.push(presentNode->left);
            }
            if (presentNode->right != NULL)
            {
                q.push(presentNode->right);
            }
        }
        else
        {
            if (!q.empty())
            {

                q.push(NULL); // level change
            }
        }
    }
    int root_val = v.front();
    int flag = 1; // true

    while (!v.empty())
    {
        if (root_val != v.front())
        {
            flag = 0;
            break;
        }
        else
        {
            flag = 1;
        }
        v.pop();
    }
    if(flag==0) return false; //not
    else if(flag==1) return true; //yes
    return 2;
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
    if (is_unival(root))
    {
        cout << " uni-valued tree" << endl;
    }
    else
    {
        cout << " not uni-valued tree" << endl;
    }
}