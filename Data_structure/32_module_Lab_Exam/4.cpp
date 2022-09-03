/*
Q 4-complete

1 2 2 3 4 4 3 -1 -1 -1 -1 -1 -1 -1 -1: true
1 2 2 -1 3 -1 3 -1 -1 -1 -1: false

logic:
1. if roots are empty- true
2. chech root value &&
    -left elements of left subtree, right elements of right subtree &&
    -right elements of left subtree, left elements of right subtree
3. if all is true- trees are symmatric

https://www.educative.io/answers/how-to-check-for-a-symmetric-binary-tree-recursive-approach

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

bool symmatry(treeNode *root1, treeNode *root2)
{
    if (root1 == NULL and root2 == NULL)
    {
        return true;
    }
    if (root1 != NULL and root2 != NULL)
    {
        if (root1->val == root2->val && symmatry(root1->left, root2->right) && symmatry(root1->right, root2->left))
        {
            return true;
        }
        else
            return false;
    }
}

bool isSymmetric(treeNode *root)
{
    return symmatry(root, root);
}

int main()
{
    // root node
    int a;
    cin >> a;
    treeNode *root = new treeNode(a);

    queue<treeNode *> q;
    q.push(root);

    while (!q.empty())
    {
        treeNode *presesntNode = q.front();
        q.pop();
        // input child values
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

        presesntNode->left = n1;
        presesntNode->right = n2;

        if (n1 != NULL) // left
        {
            q.push(n1);
        }
        if (n2 != NULL) // right
        {
            q.push(n2);
        }
    }
    bool x = isSymmetric(root);
    if (x == true)
        cout << "symatric tree" << endl;
    if (x == 0)
        cout << "not symatric tree" << endl;
}