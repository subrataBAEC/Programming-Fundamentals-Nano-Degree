/*
Q 10-complete(also works)
3 9 20 -1 -1 15 7 -1 -1 -1 -1

2 2 5 -1 -1 5 7 -1 -1 -1 -1

2 2 2 -1 -1 -1 -1

logic:
let first min= root value
and a large value x= 1000;
if (first min <result && result< x){
    x=result;
}
else return -1

https://www.youtube.com/watch?v=Vr3KIsaOQ04&ab_channel=CrackingtheFAANGInterview
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

//int min_first = root->val;
// int x = 1000;//hypothetical
long long int x = LONG_LONG_MAX; // hypothetical
int res;
int flag = 0;
// cout << min_first << " " << x << endl;

int second_minimum(treeNode *root)
{
    static int root_val=root->val;
    if (root == NULL)
    {
        return 0;
    }
    if (root->val > root_val && root->val < x)
    {
        x = root->val;
        flag = 1;
        //cout << x << endl;
    }
    else
    {
        //cout << root->val << " ";

        if (root->left != NULL)
        {
            second_minimum(root->left);
        }

        if (root->right != NULL)
        {
            second_minimum(root->right);
        }
    }
    if (flag == 1)
    {
        return x;
    }
    else
    {
        return -1;
    }
}
// 3 9 20 -1 -1 15 7 -1 -1 -1 -1
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
    int x=second_minimum(root);
    cout << x << endl;
}