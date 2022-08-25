
// generic header file for stacks
//write Stack in capital S
//wtire Top not top
#include <bits/stdc++.h>
using namespace std;

template <typename N>
class Node
{
public:
    N value;
    Node<N> *next; // check <N>
    Node<N> *prev; // check
    // constructor
    Node(N val)
    {
        value = val;
        next = NULL;
        prev = NULL;
    }
};

template <typename S>
class Stack
{
    Node<S> *head;
    Node<S> *top;
    Node<S> *midNode = NULL; // for middle element
    int count = 0;           // count push ops
public:
    // constructor
    Stack()
    {
        head = NULL;
        top = NULL;
    }
    // PUSH
    void push(S val)
    {
        Node<S> *newNode = new Node<S>(val);

        // case 1: empty
        if (head == NULL)
        {
            head = top = newNode;
            count++;
            midNode = head;
            return;
        }
        // case 2: stack is not empty
        top->next = newNode;
        newNode->prev = top;
        top = newNode; // new top
        count++;
                
        //update midNode-if count is even-move mid
        if (count % 2 == 0)
        {
            midNode = midNode->next;
        }
    }
    // POP
    S pop()
    {
        Node<S> *delNode = top; // last node, which will be out
        S val = -1;             // for empty case

        // case 1: empty
        if (head == NULL)
        {
            //cout << "empty stack | under flow" << endl;
            return val;
        }
        // case 2: if one element only
        if (head == top)
        {
            head = top = NULL;
        }
        // case 3:more than one node
        else
        {
            top = delNode->prev;
            top->next = NULL;
        }
        val = delNode->value;
        delete delNode;
        count--;
        //update midNode
        if(count%2!=0){
            midNode=midNode->prev;
        }
        return val;
    }
    // is empty?
    bool empty()
    {
        if (head == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    // size
    int size()
    {
        return count;
    }
    // return top value
    S Top()
    {
        S vl;
        if (top == NULL)
        {
            cout << "empty stack | under flow" << endl;
            vl = -1;
        }
        else
        {
            vl = top->value;
        }
        return vl;
    }
    // mid element
    S mid()
    {
        // // midNode is declared in the Stack class
        if (count == 0)
        {
            cout<<"empty stack"<<endl;
            return -1;
        }
        return midNode->value;
    }
};