/*
module 24
exam mid term
Q 7-complete

8
1 2 2 4 5 6 7 8
4
4->2->2->1->8 ->7->6->5
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

// reverse group of k nodes
Node *reverseKNodes(Node *&head, int k)
{
    if (head == NULL)
    {
        return NULL;
    }
    //initial declaration
    Node *prev=NULL;
    Node *current=head;
    Node *Next=NULL;
    int count=0;
    while(current!=NULL && count<k){
        Next=current->next;
        current->next=prev;
        prev=current;
        current=Next;
        count++;
    }
    //cout<<prev->value<<" "<<current->value<<" "<<Next->value<<endl;
    //for other k groups
    //concect to head->next
    if(current!=NULL){
        head->next=reverseKNodes(current,k);
    }
    return prev;
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
    int k;
    cin >> k;
    head = reverseKNodes(head, k);
    // cout<<head->value<<endl;
    display(head);
    return 0;
}
