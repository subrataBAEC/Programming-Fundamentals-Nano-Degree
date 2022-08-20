// my stack using template
//generic stack

#include <bits/stdc++.h>
using namespace std;

//class Node
template <typename N> class Node
{
public:
    N value; //int 
    Node *next;
    Node *prev;
    // constructor
    Node(N val) //int
    {
        value = val;
        next = NULL;
        prev = NULL;
    }
};

//class Stack
template<typename S>class Stack
{
    Node<S> *head;
    Node<S> *top;
    int count = 0; // to count push operations

public:
    //constructor
    Stack(){
        head=NULL;
        top=NULL;
    }
    // PUSH
    void push(S val)
    {
        Node  <S> *newNode = new Node <S> (val);
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
    S pop()
    {
        Node <S> *delNode = top; // capture last node, top
        S val;
        // if empty
        if (head == NULL)
        { // test top==NULL
            cout << "empty stack || underflow" << endl;
            return val;
        }
        // if one element only
        if (top == head)
        { // test delNode==head
            head = top = NULL;
            // head becomes null but value is already captured in delNode
        }
        else
        {
            // update top
            top=delNode->prev;
            top->next = NULL;
        }
        val = delNode->value;//to print poped value
        delete delNode;
        count--;
        return val;
    }
    // EMPTY- stack is empty or not
    bool empty()
    {
        if (head == NULL)
            return true; // test head=top=NULL
        else
            return false;
    }

    // SIZE
    int size()
    {
        return count;
    }

    // TOP-get top value or last node value
    S Top()
    {   S chk;
        if (top == NULL)//no element
        {
            cout << "stack underflow || no element" << endl;
        }
        else
        {
            chk=top->value;
        }
        return chk;
    }    
};