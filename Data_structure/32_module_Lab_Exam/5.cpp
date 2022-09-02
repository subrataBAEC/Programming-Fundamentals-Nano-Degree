/*
Q 5-complete

3 9 20 -1 -1 15 7 -1 -1 -1 -1

Output: 3 20 9 15 7
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
void zigzag_order(treeNode *root)
{
    int count = 0;
    if (root == NULL)
    {
        return;
    }
    queue<treeNode *> q;
    q.push(root);
    q.push(NULL);

    queue<int>z;


    while (!q.empty())
    {
        treeNode *presentNode = q.front();
        q.pop();
        if (presentNode != NULL)
        {
            //cout << presentNode->val << " ";
            z.push(presentNode->val);

            // count even
            if (count % 2 != 0)
            {
                if (presentNode->left != NULL) //left first
                {
                    q.push(presentNode->left);
                }
                if (presentNode->right != NULL)
                {
                    q.push(presentNode->right);
                }
            }
            // count odd
            if(count % 2 == 0)
            {
                if (presentNode->right != NULL)//right first
                {
                    q.push(presentNode->right);
                }

                if (presentNode->left != NULL)
                {
                    q.push(presentNode->left);
                }
                
            }
        }
        else
        {
            if (!q.empty())
            {
                q.push(NULL);
                count++;
            }
        }
    }
    //cout << "count: " << count << endl;
    while(!z.empty()){
        cout<<z.front()<<" ";
        z.pop();
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
    zigzag_order(root);
}