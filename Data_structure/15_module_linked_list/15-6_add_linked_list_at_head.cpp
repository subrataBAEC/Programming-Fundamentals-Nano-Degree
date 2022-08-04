/*
Module 15 ; vid- 6;
creating a linked list using class
user input-automation;
Insert newnode at head and tail
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
//inert newnode at head function
void insertAtHead(Node* &head, int val){
    //s1: creat newNode
    Node* newNode=new Node(val);
    //s2: replace newNode->next with head (head address)
    newNode->Next=head;
    //s3: update of head-make newNode as head
    head=newNode;
}

//inert newnode at tail function
void insertAtTail(Node* &head, int val){
    Node* newNode=new Node(val);
    //2 cases
    //case 1: when linked list is empty
    if(head==NULL){
        head=newNode;
        return;        
    }
    //case 2: linked list is not empty-already have some elements
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
    cout<<"enter 2 to insert at tail, enter 1 to insert at head"<<endl;
    int choice=2;
    while(choice==1 || choice==2){
        cout<<"enter value: ";
        int n;
        cin>>n;
        if(choice==2)   insertAtTail(head,n);
        else if(choice==1) insertAtHead(head,n);
        cout<<"next choiche: ";
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