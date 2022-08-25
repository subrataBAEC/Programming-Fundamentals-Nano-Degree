/*
module 26, vid 26-4,26-5
--> queue implementation using LL

Note:
the header file--> works for int. var.

*/

#include <bits/stdc++.h>
using namespace std;

// Node class
class Node
{
public:
    int value;
    Node *Next;

    // constructor
    Node(int val)
    {
        value = val;
        Next = NULL;
    }
};

// Queue class
class Queue
{
    Node *front;
    Node *rear;

public:
    // constructor
    Queue()
    {
        front = NULL;
        rear = NULL;
    }

    // enqueue-->push in STL
    void push(int val)
    {
        Node *newNode = new Node(val);

        // case 1: empty
        if (front == NULL)
        {
            front = newNode;
            rear = newNode;
            return;
        }
        // case 2: if already have some elements
        // add newNode after rear and update rear
        rear->Next = newNode;
        rear = rear->Next;
    }
    // dequeue-->pop in STL
    // if empty
    int pop()
    {
        
        // case 1: if empty
        int val = -1;
        if (rear == NULL)
        {
            cout << "Queue under Flow || no element" << endl;
            return val;
        }
        // case 2: not empty
        Node *delNode;
        delNode = front;
        front = front->Next;
        if (front == NULL)
        {
            rear == NULL;
        }
        val = delNode->value;
        delete delNode;
        return val;
    }
    // peek-->> front(), back()

    // front()
    int Front()
    {
        int val;
        val = front->value;
        return val;
    }
    // Rear/Back
    int Back()
    {
        int val;
        val = rear->value;
        return val;
    }

    // empty
    bool empty()
    {
        if (front == NULL && rear == NULL)//chk
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};