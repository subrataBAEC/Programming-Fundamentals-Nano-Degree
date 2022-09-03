/*
Q 10-complete

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

int second_minimum(treeNode *root)
{
    // if (root == NULL)
    // {
    //     return 1;
    // }
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
            // cout << presentNode->val << " ";
            r.push(presentNode->val);

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
    int min_first = root->val;
    //int x = 1000;//hypothetical
    long long int x = LONG_LONG_MAX;//hypothetical
    int res;
    int flag = 0;
    //cout << min_first << " " << x << endl;
    while (!r.empty())
    {
        res = r.front();
        if (res > min_first && res < x)
        {
            flag = 1;
            x = res;
            //cout << "x: " << x << endl;
        }
        r.pop();
    }
    if (flag == 1)
    {
        return x;
    }
    else
    {
        return -1;
    }
    // cout << x << endl;
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
    int x = second_minimum(root);
    cout << x << endl;
}