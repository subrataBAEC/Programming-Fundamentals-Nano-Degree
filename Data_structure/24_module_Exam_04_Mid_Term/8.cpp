/*
module 24
exam mid term
Q 8-complete
Given a linked list of size K and two integers M and N. Traverse the linked list such that you
retain M nodes then delete the next N nodes, continue the same till the end of the linked list.

Sample Input 1
8 2 2
1 2 3 4 5 6 7 8
Output
1->2->5->6

2
10 3 2
1 2 3 4 5 6 7 8 9 10
1->2->3->6->7->8
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


// keep m items, skip n items
void keepAndSkip(Node *&head, int m, int n)
{
    int count = 0;
    Node *temp = head;
    // cout<<m<<" "<<n<<endl;

    while (temp->next != NULL)
    {
        for (int i = 0; i < m - 1; i++)
        {
            //cout << temp->value << " ";
            temp = temp->next;
            if(temp->next==NULL){//if finishes early
            return;
        }
        }
        Node *first = temp;
        Node *second = first->next;
        first->next = NULL;
        //cout << "first: " << first->value << endl;
        //cout << "second: " << second->value << endl;

        for (int i = 0; i < n - 1; i++)
        {
            second = second->next;
        }

        //cout << "second: " << second->value << endl;
        if(second->next==NULL){//if finishes early
            return;
        }
        Node *n = second->next;
        second->next = NULL;
        //cout << "n:" << n->value << endl;
        first->next = n;
        temp=n;
        //cout<<"last temp: "<<temp->value<<endl;
        //display(head);
    }
}

int main()
{
    Node *head = NULL;
    int k, m, n, value;
    cin >> k >> m >> n;

    // input
    for (int i = 0; i < k; i++)
    {
        cin >> value;
        insertionAtTail(head, value);
    }
    // display(head);

    // replace and output
    // replaceEvenValues(head);
    keepAndSkip(head, m, n);
    display(head);
    return 0;
}