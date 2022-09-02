/*
Q 9-in complete

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
        return;
    }
    else{
        
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
    is_unival(root);
}