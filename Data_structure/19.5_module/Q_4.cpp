/* practice module 19.5
Q.4-complete
Write down a function named int findMid(Node* &head) which will return the value of middle element
of the List without using countLength() function.
[ Hints: Use two pointers to solve ]
*/

#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int value;
    node *next;
    // constructor
    node(int val)
    {
        value = val;
        next = NULL;
    }
};
// insert node
void insertNode(node *&head, int val)
{
    node *newNode = new node(val);
    // if node is empty
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    // LL is not empty
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
// display
void display(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
        if (temp != NULL)
            cout << "-> ";
    }
    cout << endl;
}
// length
int length(node *head)
{
    node *temp = head;
    int count = 1;
    while (temp->next != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
// find middle using two pointers
int findMidTwoPonters(node *head)
{
    node *fast = head;
    node *slow = head;
    // cout<<fast->value<<" "<<slow->value;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow->value;
    // cout<<"mid: "<<slow->value<<endl;
}
// find mid using length
int midUsingLength(node *head)
{
    node *temp = head;
    int len = length(head);
    int pos = len / 2;
    //cout << "pos: " << pos << endl;
    for (int i = 1; i <= pos; i++)
    {
        temp = temp->next;
    }
    return temp->value;
}

////replace even values with -1
// void replace(node *&head){
//     node *temp=head;
//     while(temp!=NULL){
//         if((temp->value%2)==0){
//             temp->value=-1;
//         }
//         temp=temp->next;
//     }
// }
int main()
{
    node *head = NULL;
    int n;
    cout << "enter n nodes: ";
    cin >> n;
    int value;
    cout << "insert n values" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        insertNode(head, value);
    }
    display(head);
    cout<<"mid-using two pointers"<<endl;
    int mid=findMidTwoPonters(head);
    cout<<"Mid: "<<mid<<endl;
    cout<<"mid-using length"<<endl;
    int mid_using_len = midUsingLength(head);
    cout << "Mid: " << mid_using_len<<endl;

    // int len=length(head);
    // cout<<len;

    // display(head);
}