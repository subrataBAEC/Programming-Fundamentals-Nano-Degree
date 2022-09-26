/*
Lab Final exam
- complete

No: 4
Name: convert it


*/
#include <bits/stdc++.h>
using namespace std;

priority_queue<int> pq;

class treeNode
{
public:
    int data;
    treeNode *left;
    treeNode *right;
    treeNode(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void inOrderTraversal(treeNode *root)
{ // left, root, right
    if (root == NULL)
    {
        return;
    }
    inOrderTraversal(root->left);
    //cout << root->data << " ";
    pq.push(root->data); // push to p. queue
    inOrderTraversal(root->right);
}

// level order traversal-using queue
void levelOrderTraversal(treeNode *root)
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
            if (presentNode->left != NULL)
            {
                q.push(presentNode->left);
            }
            if (presentNode->right != NULL)
            {
                q.push(presentNode->right);
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

int main()
{
    // input Tree
    int r;
    cin >> r;
    treeNode *root = new treeNode(r);

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

        presentRoot->left = n1;
        presentRoot->right = n2;

        if (n1 != NULL)
            q.push(n1);
        if (n2 != NULL)
            q.push(n2);
    }
    // to check
    // cout << endl;
    inOrderTraversal(root);
    //cout << endl;

    // cout << pq.top();
    // pq.pop();
    // cout << pq.top();

    // while(!pq.empty()){
    //     cout<<pq.top()<<" ";
    //     pq.pop();
    // }

    int t, choice, newVal;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> choice;
        if (choice == 1)
        {
            cin >> newVal;
            pq.push(newVal);
        }
        else if (choice == 2)
        {
            cout << pq.top() << endl;
            pq.pop();
        }
     }
    return 0;
}
/*
1 2 3 4 -1 -1 -1 -1 -1


0 1 2 3 -1 -1 4 -1 -1 -1 -1
4
2
1 10
1 8
2
*/