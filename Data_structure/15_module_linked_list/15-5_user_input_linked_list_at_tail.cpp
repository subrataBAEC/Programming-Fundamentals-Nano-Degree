/*
Module 15 ; vid- 5;
creating a linked list using class
user input-automation;
Insert newnode at tail
*/

#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int value;
        Node *Next;
    //constructor
    Node(int val){
        value=val;
        Next=NULL;
    }
};
//inert at tail function
void insertAtTail(Node* &head, int val){
    Node* newNode=new Node(val);
    //when linked list is empty
    if(head==NULL){
        head=newNode;
        return;        
    }
    //linked list is not empty-already have some elements
    Node* temp=head;
    while(temp->Next!=NULL){
        temp=temp->Next;
    }
    temp->Next=newNode;

}
//print function
void display(Node* n){
    cout<<"self address, value, next address"<<"\n";
    while(n!= NULL){
        cout<<n<<" "<<n->value<<" "<<n->Next<<endl;
        n=n->Next;
    }
}

int main(){
    Node* head=NULL;
    //input using loop
    char choice='y';
    while(choice=='y'){
        cout<<"enter value"<<endl;
        int n;
        cin>>n;
        insertAtTail(head,n);
        cout<<"again: y/n?";
        cin>>choice;
    }
    //input separately
    // insertAtTail(head,1);
    // insertAtTail(head,5);
    // insertAtTail(head,8);
    // insertAtTail(head,9);

    //print using function
    display(head);
    return 0;
}