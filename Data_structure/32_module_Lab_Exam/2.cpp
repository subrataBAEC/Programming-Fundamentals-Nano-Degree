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
            chk+=" ";
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
                q.push(NULL); //here level changes
            }
        }
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
    string levelordertraversal = "";
    levelOrderTraversal(root, levelordertraversal); 
    cout<<endl;
    cout<< "Levelorder traversal: " << levelordertraversal << endl; // print from string
    cout << endl;

    return 0;
}
