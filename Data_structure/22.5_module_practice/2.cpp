/*
Q 2- complete
remove dulicates from sorted LL
https://www.youtube.com/watch?v=7pgs-wT5d4c&ab_channel=CodeHelp-byBabbar
*/

#include <bits/stdc++.h>
using namespace std;

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
// count length
int countLength(Node *&head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->Next;
        // cout << "len" << endl;
    }
    return count;
}
// add node at head
void inputAtHead(Node *&head, char val)
{
    Node *newNode = new Node(val);
    newNode->Next = head;
    head = newNode;
}
// add node at tail
void inputAtTail(Node *&head, char val)
{
    Node *newNode = new Node(val);
    // if empty
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    // if have some elements
    Node *temp = head;
    while (temp->Next != NULL)
    {
        temp = temp->Next;
    }
    temp->Next = newNode;
}
// display
void display(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->Next;
    }
    cout << endl;
}
// find mid node
Node *midNode(Node *head)
{
    if (head == NULL)
    {
        return head;
    }
    Node *fast = head;
    Node *slow = head;

    while (fast != NULL && fast->Next != NULL)
    {

        fast = fast->Next->Next;
        slow = slow->Next;
    }
    return slow;
}
// reverse of LL-using 3 pointers
Node *reverse(Node *&head)
{
    if (head == NULL)
    {
        return head;
    }
    Node *prev = NULL;
    Node *current = head;
    Node *next = current->Next;
    while (1)
    {
        current->Next = prev;
        prev = current;
        current = next;
        if (current == NULL)
        {
            break;
        }
        next = next->Next;
    }
    return prev;
}
// palindrome check
bool palindrome(Node *&head)
{
    if (head == NULL)
    {
        return true;
    }
    Node *mid = midNode(head);
    cout << "mid: " << mid->value << endl;
    int len = countLength(head);
    Node *right;
    if (len % 2 == 0)
    {
        cout << "even" << endl;
        right = reverse(mid); // reverse from after mid
    }
    else
    {
        cout << "odd" << endl;
        right = reverse(mid->Next); // reverse from after mid
    }
    cout << "left half: ";
    display(head);
    cout << "right half after reverse: ";
    display(right);
    // compare two halfs
    Node *left = head;
    while (right != NULL)
    {
        if (left->value != right->value)
        {
            return false;
        }
        left = left->Next;
        right = right->Next;
    }
    return true;
}
// remove duplicates sorted
Node *removeDuplicateSorted(Node *&head)
{
    // if empty
    if (head == NULL)
    {
        return NULL;
    }
    Node *temp = head;
    while (temp != NULL)
    {
        if ((temp->Next != NULL) && (temp->value == temp->Next->value))
        { // equal adjacent values
            // Node *next_next=temp->Next->Next;
            Node *delNode = temp->Next;
            temp->Next = delNode->Next;//temp->next->next doesnot work
            delete delNode;
        }
        else
        { // not equal
            temp = temp->Next;
        }
    }
    return head;
}
int main()
{
    Node *head = NULL, *last = NULL;

    // inputAtHead(head, 'A');
    // inputAtTail(head, 'B');
    // inputAtTail(head, 'C');
    // inputAtTail(head, 'C');
    // inputAtTail(head, 'B');
    // inputAtTail(head, 'A');
    inputAtHead(head, 1);
    inputAtTail(head, 1);
    inputAtTail(head, 2);
    inputAtTail(head, 3);
    inputAtTail(head, 4);
    inputAtTail(head, 4);
    display(head);

    head = removeDuplicateSorted(head);
    display(head);
    // cout << palindrome(head) << endl;
    //  mid
    //   Node *mid=NULL;
    //   mid=midNode(head);
    //   cout<<mid->value<<endl;

    // //display(mid);
    // //reverse
    // last=reverse(mid);
    // display(last);
    // //cout<<mid;
    // display(head);
}