/*
module 24
exam mid term
Q 6-complete
Write down a program that will take n number of input from the users and create a Linear
Linked List of n size. Replace all the even numbers in the list with -1 and display the List.
5
1 3 4 5 6
1-> 3 -> -1 -> 5 -> -1

*/

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    // constructor
    Node(int val)
    {
        value = val;
        next = NULL;
    }
};
// display
void display(Node *&head)
{
    Node *temp = head;
    if (head == NULL)
    {
        cout << "empty" << endl;
    }
    while (temp != NULL)
    {
        cout << temp->value;
        temp = temp->next;
        if (temp != NULL)
        {
            cout << " -> ";
        }
    }
}
// node add/ node at tail
void insertionAtTail(Node *&head, int val)
{
    Node *temp = head;
    Node *newNode = new Node(val);
    // if empty
    if (head == NULL)
    {
        head = newNode;
        // cout<<head->value<<endl;
        return;
    }
    // have some elements
    while (temp->next != NULL)
    {

        temp = temp->next;
    }
    temp->next = newNode;
    // cout<<temp->value<<" "<<temp->next->value<<endl;
}
// replace even values with -1
void replaceEvenValues(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if ((temp->value % 2) == 0)
        {
            temp->value = -1;
        }
        temp = temp->next;
    }
}

int main()
{

    Node *head = NULL;
    int n, value;
    cin >> n;

    // input
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        insertionAtTail(head, value);
    }
    // display(head);

    // replace and output 
    replaceEvenValues(head);
    display(head);
    return 0;
}