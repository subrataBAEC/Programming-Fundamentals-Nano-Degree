/*
Q 1-complete

input tree 1 and 2: 
1 2 3 -1 -1 -1 -1
1 2 3 -1 -1 -1 -1
output:

input tree 1 and 2: 
1 2 -1 -1 -1
1 -1 2 -1 -1
*/

#include <bits/stdc++.h>
using namespace std;

class treeNode
{
public:
    int data;
    treeNode *leftChild;
    treeNode *rightChild;
    // constructor
    treeNode(int value)
    {
        data = value;
        leftChild = NULL;
        rightChild = NULL;
    }
};

void levelOrderTraversal(treeNode *root, string &chk)
{
    if (root == NULL)
    {
        return;
    }

    queue<treeNode *> q; // pointer type queue
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        treeNode *presentNode = q.front();
        q.pop();
        // presentNode is not NULL
        if (presentNode != NULL)
        {
            cout << presentNode->data << " ";
            chk += to_string(presentNode->data); // also print as string
            if (presentNode->leftChild != NULL)
            {
                q.push(presentNode->leftChild);
            }
            if (presentNode->rightChild != NULL)
            {
                q.push(presentNode->rightChild);
            }
        }
        // presentNode is NULL
        else
        {
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
    }
}

// is similar two trees?
bool isSame(treeNode *root1, treeNode *root2)
{
    bool x, y, z;
    // NULL
    if (root1 == NULL && root2 == NULL)
    {
        return true;
    }
    // not null
    else if (root1 != NULL && root2 != NULL)
    {
        x = (root1->data == root2->data);
        y = isSame(root1->leftChild, root2->leftChild);
        z = isSame(root1->rightChild, root2->rightChild);
    }
    int res = x && y && z;
    if (res == 1)
    {
        //cout << "res " << res << endl;
        return true;
    }
    else
    {
        //cout << "res " << res << endl;
        return false;
    }
}

int main()
{
    // first tree

    // creat root node
    int a;
    cin >> a;
    treeNode *root = new treeNode(a);

    queue<treeNode *> q;
    q.push(root);

    while (!q.empty())
    {
        treeNode *presentRoot = q.front(); // STL queue
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

        presentRoot->leftChild = n1;
        presentRoot->rightChild = n2;

        if (n1 != NULL)
            q.push(n1);
        if (n2 != NULL)
            q.push(n2);
    }

    // second tree
    int b;
    cin >> b;
    treeNode *root2 = new treeNode(b);

    queue<treeNode *> q2;
    q2.push(root2);

    while (!q2.empty())
    {
        treeNode *presentRoot2 = q2.front(); // STL queue
        q2.pop();
        int x2, y2;
        cin >> x2 >> y2;
        treeNode *n3 = NULL;
        treeNode *n4 = NULL;

        if (x2 != -1)
        {
            n3 = new treeNode(x2);
        }

        if (y2 != -1)
        {
            n4 = new treeNode(y2);
        }

        presentRoot2->leftChild = n3;
        presentRoot2->rightChild = n4;

        if (n3 != NULL)
            q2.push(n3);
        if (n4 != NULL)
            q2.push(n4);
    }
    bool res = isSame(root, root2);
    if (res == 1)
    {
        cout << "similar";
    }
    else
    {
        cout << "not similar";
    }

    // string levelordertraversal = "";
    // cout << "Levelorder traversal: ";
    // levelOrderTraversal(root2, levelordertraversal); // print from function
    // //cout << endl;
    // //cout<< "Levelorder traversal: " << levelordertraversal << endl; // print from string
    // cout << endl;

    return 0;
}
