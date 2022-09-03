/*
Q 07-complete

1 2 3 -1 -1 -1 -1

4 2 9 3 5 -1 7 -1 -1 -1 -1 -1 -1
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
int tilt = 0;
int findSum(treeNode *root)
{
    // following post order traversal system:left,root,right
    if (root == NULL)
        return 0;
    int l = findSum(root->left);
    int r = findSum(root->right);
    tilt = tilt + abs(l - r); // node: left-right
    return l + r + root->val; // returning to upper node
}

int findTilt(treeNode *root)
{
    if (root == NULL)
        return 0;
    findSum(root);
    return tilt;
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
    int x = findTilt(root);
    cout << x << endl;
}