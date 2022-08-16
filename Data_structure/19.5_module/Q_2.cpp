/* practice module 19.5
Q.3-complete
-creat a linked list of n size
-replace even values with -1
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
        if(temp!=NULL) cout<<"-> ";
    }
    cout << endl;
}
// function to input n size LL
//replace
void replace(node *&head){
    node *temp=head;
    while(temp!=NULL){
        if((temp->value%2)==0){
            temp->value=-1;
        }
        temp=temp->next;
    }
}
int main()
{
    node *head = NULL;
    int n;
    cout<<"enter n nodes: ";
    cin>>n;
    int value;
    cout<<"insert 5 values"<<endl;
    for (int i = 0; i < n; i++)
    {   cin >> value;
        insertNode(head, value);
    }    
    display(head);

    //replace even values with -1
    replace(head);
    display(head);
}