/*
module 30,31
implementation of Tree

30-1,30-2: implementation
30-3: inorder traversal, preorder, postorder
31-1,31-2: level order traversal(using BFS)
            - direct print
            - print as string
            - finding max value in k'th level


9
0 1 2
1 3 4
2 5 6
3 -1 -1
4 -1 -1
5 7 8
6 -1 -1
7 -1 -1
8 -1 -1

Root: 0
Left:
    Root: 1
    Left: 3
    Right:4
Right:
    Root: 2
    Left:
        Root: 5
        Left: 7
        Right:8
    Right: 6
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

void spacePrint(int level)
{
    for (int i = 0; i < level; i++)
    {
        cout << "     ";
    }
}

void printTree(treeNode *root, int level)
{
    // empty tree
    if (root == NULL)
    {
        return;
    }
    // Case 1: only root, no child--display data
    if (root->leftChild == NULL && root->rightChild == NULL)
    {
        cout << root->data << endl;
        return;
    }
    // case 2:
    else
    {
        cout << endl;
        spacePrint(level);
        cout << "Root: " << root->data << endl;
    }
    // if any left child
    if (root->leftChild != NULL)
    {
        spacePrint(level);
        cout << "Left: ";
        printTree(root->leftChild, level + 1);
    }
    // if any right child
    if (root->rightChild != NULL)
    {
        spacePrint(level);
        cout << "Right: ";
        printTree(root->rightChild, level + 1);
    }
}

// in order traversal
void inOrder(treeNode *root, string &chk)
{ // left, root, right
    if (root == NULL)
    {
        return;
    }
    inOrder(root->leftChild, chk);
    chk = chk + to_string(root->data);
    inOrder(root->rightChild, chk);
}
// pre order traversal
void preOrder(treeNode *root, string &chk)
{ // root, left, right
    if (root == NULL)
    {
        return;
    }
    chk = chk + to_string(root->data);
    preOrder(root->leftChild, chk);
    preOrder(root->rightChild, chk);
}
// post order traversal
void postOrder(treeNode *root, string &chk)
{ // left, right,root
    if (root == NULL)
    {
        return;
    }
    postOrder(root->leftChild, chk);
    postOrder(root->rightChild, chk);
    chk = chk + to_string(root->data);
}

// level order traversal-using queue
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
// finding max value in k'th level
// using lever order traversal
int maxValueAtKlevel(treeNode *root, int k)
{
    if (root == NULL)
    {
        return -1;
    }
    int level = 0;    // for count level
    int max = -99999; // for max in k th level

    queue<treeNode *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        treeNode *presesntNode = q.front();
        q.pop();

        if (presesntNode != NULL)
        {
            cout << presesntNode->data << " "; // just print

            if (level == k && presesntNode->data > max)
            {
                max = presesntNode->data;
            }
            if (presesntNode->leftChild != NULL)
            {
                q.push(presesntNode->leftChild);
            }
            if (presesntNode->rightChild != NULL)
            {
                q.push(presesntNode->rightChild);
            }
        }
        else
        {
            if (!q.empty())
            {
                q.push(NULL);
                level++; // level increments when push null
                cout << endl;
            }
        }
    }
    return max;
}

int main()
{


    //input
    int n;
    cin >> n;
    treeNode *allNodes[n]; // treeNode type array pointer
    for (int i = 0; i < n; i++)
    {
        allNodes[i] = new treeNode(-1);
    }

    for (int i = 0; i < n; i++)
    {
        int value, left, right;
        cin >> value >> left >> right;
        allNodes[i]->data = value;

        if (left > n - 1 || right > n - 1)
        {
            cout << "invalid" << endl;
            break;
        }

        if (left != -1)
        {
            allNodes[i]->leftChild = allNodes[left];
        }

        if (right != -1)
        {
            allNodes[i]->rightChild = allNodes[right];
        }
    }

    // print the tree
    printTree(allNodes[0], 0);

    // in order traversal
    string inordertraversal = "";
    inOrder(allNodes[0], inordertraversal);
    cout << "Inorder traversal: " << inordertraversal << endl;

    // pre order traversal
    string preordertraversal = "";
    preOrder(allNodes[0], preordertraversal);
    cout << "Preorder traversal: " << preordertraversal << endl;

    // post order traversal
    string postordertraversal = "";
    postOrder(allNodes[0], postordertraversal);
    cout << "Postorder traversal: " << postordertraversal << endl;

    // level order traversal
    string levelordertraversal = "";
    cout << "Levelorder traversal: ";
    levelOrderTraversal(allNodes[0], levelordertraversal); // print from function
    cout << endl;
    cout<< "Levelorder traversal: " << levelordertraversal << endl; // print from string
    cout << endl;
       
    // finding max value in k'th level
    cout << "levels in tree " << endl;
    int k = 3;
    int max = maxValueAtKlevel(allNodes[0], k);
    cout << endl;
    cout<<"max in level " << k << " is: " << max << endl;

    return 0;
}