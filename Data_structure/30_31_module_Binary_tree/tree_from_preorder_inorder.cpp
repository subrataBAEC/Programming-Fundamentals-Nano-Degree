/*
module 31-3
implementation of Tree

inorder traversal, preorder, postorder
tree from preorder and inorder

input: preorder, inorder in array
output: build tree

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

9
0 1 3 4 2 5 7 8 6
3 1 4 0 7 5 8 2 6
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

// 1. print tree
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

// 2. in order traversal
void inOrderTraversal(treeNode *root, string &chk)
{ // left, root, right
    if (root == NULL)
    {
        return;
    }
    inOrderTraversal(root->leftChild, chk);
    chk = chk + to_string(root->data);
    inOrderTraversal(root->rightChild, chk);
}
// 3. pre order traversal
void preOrderTraversal(treeNode *root, string &chk)
{ // root, left, right
    if (root == NULL)
    {
        return;
    }
    chk = chk + to_string(root->data);
    preOrderTraversal(root->leftChild, chk);
    preOrderTraversal(root->rightChild, chk);
}
// 4. post order traversal
void postOrderTraversal(treeNode *root, string &chk)
{ // left, right,root
    if (root == NULL)
    {
        return;
    }
    postOrderTraversal(root->leftChild, chk);
    postOrderTraversal(root->rightChild, chk);
    chk = chk + to_string(root->data);
}

// 5. level order traversal-using queue
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

// 6. finding max value in k'th level
//  using lever order traversal
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

// 7. buid tree from preorder and inorder
int searchValue(int inOrder[], int current, int start, int end)
{

    for (int i = start; i <= end; i++)
    {
        if (inOrder[i] == current)
        {
            return i;
        }
    }
    return -1;
}

treeNode *build_tree_Pre_In(int preOrder[], int inOrder[], int start, int end)
{
    static int id = 0;

    int current = preOrder[id];
    id++;
    treeNode *newNode = new treeNode(current);
    if (start == end)
    {
        return newNode;
    }

    int pos = searchValue(inOrder, current, start, end); // 3
    newNode->leftChild = build_tree_Pre_In(preOrder, inOrder, start, pos - 1);
    newNode->rightChild = build_tree_Pre_In(preOrder, inOrder, pos + 1, end);

    return newNode;
}

int main()
{
    // //input
    // int n;
    // cin >> n;
    // treeNode *allNodes[n]; // treeNode type array pointer
    // for (int i = 0; i < n; i++)
    // {
    //     allNodes[i] = new treeNode(-1);
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     int value, left, right;
    //     cin >> value >> left >> right;
    //     allNodes[i]->data = value;

    //     if (left > n - 1 || right > n - 1)
    //     {
    //         cout << "invalid" << endl;
    //         break;
    //     }

    //     if (left != -1)
    //     {
    //         allNodes[i]->leftChild = allNodes[left];
    //     }

    //     if (right != -1)
    //     {
    //         allNodes[i]->rightChild = allNodes[right];
    //     }
    // }

    // // print the tree
    // printTree(allNodes[0], 0);

    // // in order traversal
    // string inordertraversal = "";
    // inOrder(allNodes[0], inordertraversal);
    // cout << "Inorder traversal: " << inordertraversal << endl;

    // // pre order traversal
    // string preordertraversal = "";
    // preOrder(allNodes[0], preordertraversal);
    // cout << "Preorder traversal: " << preordertraversal << endl;

    // // post order traversal
    // string postordertraversal = "";
    // postOrder(allNodes[0], postordertraversal);
    // cout << "Postorder traversal: " << postordertraversal << endl;

    // // level order traversal
    // string levelordertraversal = "";
    // cout << "Levelorder traversal: ";
    // levelOrderTraversal(allNodes[0], levelordertraversal); // print from function
    // cout << endl;
    // cout<< "Levelorder traversal: " << levelordertraversal << endl; // print from string
    // cout << endl;
       
    // // finding max value in k'th level
    // cout << "levels in tree " << endl;
    // int k = 3;
    // int max = maxValueAtKlevel(allNodes[0], k);
    // cout << endl;
    // cout<<"max in level " << k << " is: " << max << endl;


    int n;
    cin >> n;
    int preOrder[n], inOrder[n];
    for (int i = 0; i < n; i++)
    {
        cin >> preOrder[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> inOrder[i];
    }
    // int start = 0, end = n - 1;

    treeNode *root = build_tree_Pre_In(preOrder, inOrder, 0, n - 1);

    // for checking
    string chk_preorder = "";
    preOrderTraversal(root, chk_preorder);
    cout << chk_preorder << endl;
    printTree(root, 0);
    return 0;
}