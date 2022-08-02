/*
Module 10.5 ;
5-search in an array: complete
*/

#include <bits/stdc++.h>
using namespace std;


//print array
void printArray(int array[],int n){
    for(int i=0; i<n; i++){
        cout<<array[i]<<" ";
    }
    cout<<"\n";
}

int main(){
    int n;
    cin>>n;
    int array[n];
    int sum=0;

    //input array
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
    //Linear search
    int value;
    cin>>value;
    int flag=0;
    for(int i=0; i<n; i++){
        if(value==array[i]){
            flag=1;
            cout<<"found at index: "<<i<<"\n";
        }
    }
    if(flag==0) cout<<"NOT FOUND"<<"\n";
    return 0;
}
