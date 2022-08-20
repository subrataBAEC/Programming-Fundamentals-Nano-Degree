#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node *prev;
    // constructor
    Node(int val)
    {
        value = val;
        next = NULL;
        prev = NULL;
    }
};

class Stack
{
    Node *head;
    Node *top;
    int count = 0; // to count push operations

public:
    // constructor
    Stack()
    {
        head = NULL;
        top = NULL;
    }
    // PUSH
    void push(int val)
    {
        Node *newNode = new Node(val);
        // empty stack
        if (head == NULL)
        {
            head = top = newNode;
            count++;
            return;
        }
        // stack is not empty
        top->next = newNode;
        newNode->prev = top;
        top = newNode; // top update, same top=top->next;
        count++;
    }
    // POP
    int pop()
    {
        Node *delNode = top; // capture last node, top
        int val = -1;        // for head==null
        // if empty
        if (head == NULL)
        { // test top==NULL
            cout << "empty stack || underflow" << endl;
            return val;
        }
        // if one element only
        if (head == top)
        { // test delNode==head
            head = top = NULL;
            // head becomes null but value is already captured in delNode
        }
        else
        {
            // update top
            top = delNode->prev;
            top->next = NULL;
        }
        val = delNode->value; // to print poped value
        delete delNode;
        count--;
        return val;
    }
    // EMPTY- stack is empty or not
    bool empty()
    {
        if (head == NULL)
        {
            return true; // test head=top=NULL
        }
        else
        {
            return false;
        }
    }

    // SIZE
    int size()
    {
        return count;
    }

    // TOP-get top value or last node value
    int Top()
    {
        int chk;
        if (top == NULL) // no element
        {
            cout << "stack underflow || no element" << endl;
            chk = -1;
        }
        else
        {
            chk = top->value;
        }
        return chk;
    }
};