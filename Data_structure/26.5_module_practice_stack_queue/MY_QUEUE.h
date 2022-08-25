/*
Note:
the header file--> generic header file.

*/

#include <bits/stdc++.h>
using namespace std;

// Node class
template <typename N>class NodeQueue
{
public:
    N value;
    NodeQueue *Next;

    // constructor
    NodeQueue(N val)
    {
        value = val;
        Next = NULL;
    }
};

// Queue class
template <typename Q>class Queue
{
    NodeQueue<Q> *front;
    NodeQueue<Q> *rear;
    int count = 0; // for size

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
        NodeQueue<Q> *newNode = new NodeQueue<Q>(val);//******

        // case 1: empty
        if (front == NULL)
        {
            front = newNode;
            rear = newNode;
            count++;
            return;
        }
        // case 2: if already have some elements
        // add newNode after rear and update rear
        rear->Next = newNode;
        rear = rear->Next;
        count++;
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
        NodeQueue<Q> *delNode;
        delNode = front;
        front = front->Next;
        if (front == NULL)
        {
            rear == NULL;
        }
        val = delNode->value;
        delete delNode;
        count--;
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
        if (front == NULL && rear == NULL) // chk
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    // size()
    int size()
    {
        return count;
    }
};