
/*
----------------------
Name:  subrata saha
email: subratabaec@gmail.com
Date: Jan 7, 2023
-----------------------
//prime prime//

0
1 2
4 3 6 5
7 -1 -1 -1 13 -1 9 11
-1 10 -1 -1 -1 -1 -1 -1
-1 -1

0
1 2
4 4 6 5
7 -1 -1 -1 14 -1 9 12
-1 10 -1 -1 -1 -1 -1 -1
-1 -1
*/

#include <bits/stdc++.h>
using namespace std;

int leaf_nodes[200];

class treeNode{
public:
    int data;
    treeNode *leftChild;
    treeNode *rightChild;

    treeNode(int val){
        data=val;
        leftChild=NULL;
        rightChild=NULL;
    }
};
bool is_prime(int num){
    
    int flag=1;
    if(num==0 || num==1){
        flag=0;
        return false;
    }
    for(int i=2; i<=(num/2); i++){
        if((num%i)==0){
            flag=0;
            return false;
            // break;
        }
    }
    if(flag==1){
        return true;
    }
    return -1;

}

int i=0,count=0;
void print_leaves(treeNode *root){
    if(root==NULL){
        return;
    }
    if(root->leftChild==NULL && root->rightChild==NULL){
        // cout<<root->data<<" ";

        // inser if prime num.
        bool res=is_prime(root->data);
        if(res==true){
            leaf_nodes[i]=root->data;
            i++;
        }
    }
    print_leaves(root->leftChild);
    print_leaves(root->rightChild);
}

int main(){
    //root node
    int a;
    cin>>a;
    treeNode *root=new treeNode(a);

    queue<treeNode *>q;
    q.push(root);

    while(!q.empty()){
        treeNode *presentNode= q.front();
        q.pop();
        int x,y;
        cin>>x>>y;
        treeNode *n1=NULL;
        treeNode *n2=NULL;

        if(x!=-1){
            n1=new treeNode(x);
        }
        if(y!=-1){
            n2=new treeNode(y);
        }

        presentNode->leftChild=n1;
        presentNode->rightChild=n2;

        if(n1!=NULL){
            q.push(n1);
        }
        if(n2!=NULL){
            q.push(n2);
        }       

    }
    // cout<<"print leaves"<<endl;
    print_leaves(root);

    // for(int j=0; j<i; j++){

    //     cout<<leaf_nodes[j]<<" ";
    // }
    // cout<<endl;
    // sorting
    sort(leaf_nodes, leaf_nodes + i);

    // cout<<i<<endl;
    if(i==0){
        cout<<-1<<endl;
        return 0;
    }

    for(int j=0; j<i; j++){

        cout<<leaf_nodes[j]<<" ";
    }
    cout<<endl;
}
