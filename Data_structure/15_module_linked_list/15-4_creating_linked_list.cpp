/*
Module 15 ; vid- 4;
creating a linked list using class
*/

#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int value;
        Node *Next;
};

void display(Node* n){
    cout<<"self address, value, next address"<<"\n";
    while(n!= NULL){
        cout<<n<<" "<<n->value<<" "<<n->Next<<endl;
        n=n->Next;
    }
}

int main(){
    Node* head=new Node();
    Node* second=new Node();
    Node* third=new Node();
    Node* fourth=new Node();
    //assign values
    head->value=1;
    second->value=5;
    third->value=8;
    fourth->value=9;
    //address
    head->Next=second;//second=address of second
    second->Next=third;
    third->Next=fourth;
    fourth->Next=NULL;
    cout<<"address=self address, next address=address of next node"<<"\n";
    cout<<"  address "<<" value "<<" next-address"<<endl;
    cout<<head<<" "<<head->value<<" "<<head->Next<<endl;
    cout<<second<<" "<<second->value<<" "<<second->Next<<endl;
    cout<<third<<" "<<third->value<<" "<<third->Next<<endl;
    cout<<fourth<<" "<<fourth->value<<" "<<fourth->Next<<endl;
    cout<<endl;
    
    //print using function
    display(head);
    return 0;
}
