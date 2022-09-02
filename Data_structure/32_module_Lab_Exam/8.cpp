/*
Q 8-complete

3 9 20 -1 -1 15 7 -1 -1 -1 -1
Output:3 14.5 11
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
void average_level(treeNode *root)
{
    int sum = 0;
    int count = 0;
    if (root == NULL)
    {
        return;
    }
    queue<treeNode *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        treeNode *presentNode = q.front();
        q.pop();
        if (presentNode != NULL)
        {
            sum = sum + presentNode->val; //sum values of same level
            count++;
            //  cout << presentNode->val << " ";

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
            //print sum values after level change and then reset.
            //cout << "elements: " << count << " sum: " << sum << endl;
            double avg=(double)sum/(double)count;
            cout<<avg<<" " ;
            sum=0;
            count=0;
        }
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
    average_level(root);
}