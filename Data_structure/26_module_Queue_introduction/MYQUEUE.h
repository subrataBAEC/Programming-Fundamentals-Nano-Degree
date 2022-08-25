/*
module 26, vid 26-6

Note:
the header file--> works for int. var.

*/

#include <bits/stdc++.h>
using namespace std;

// Node class
template<typename N>class Node
{
public:
    N value;
    Node *Next;

    // constructor
    Node(N val)
    {
        value = val;
        Next = NULL;
    }
};

// Queue class
template<typename Q>class Queue
{
    Node <Q>*front;
    Node <Q>*rear;

public:
    // constructor
    Queue()
    {
        front = NULL;
        rear = NULL;
    }

    // enqueue-->push in STL
    void push(Q val)
    {
        Node <Q> *newNode = new Node(val);

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
    Q pop()
    {
        
        // case 1: if empty
        Q val;
        if (rear == NULL)
        {
            cout << "Queue under Flow || no element" << endl;
            return val;
        }
        // case 2: not empty
        Node  <Q>*delNode;
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
    Q Front()
    {
        Q val;
        val = front->value;
        return val;
    }
    // Rear/Back
    Q Back()
    {
        Q val;
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