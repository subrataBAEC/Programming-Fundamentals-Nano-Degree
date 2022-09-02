/*
Q 2-complete

in:
3 9 20 -1 -1 15 7 -1 -1 -1 -1

out:
3 9 20 15 7
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

void level_order(treeNode *root)
{

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
            cout << presentNode->val << " ";
            // levelOrder=levelOrder+to_string(presentNode->val);
            // levelOrder=levelOrder+" ";

            if (presentNode->left != NULL)
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
                q.push(NULL);
            }
        }
    }
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

        if (n1 != NULL)
        {
            q.push(n1);
        }
        if (n2 != NULL)
        {
            q.push(n2);
        }
    }

    // level order traversal
    // string levelOrder = "";
    cout << "Lever order traversal: ";
    level_order(root);
}