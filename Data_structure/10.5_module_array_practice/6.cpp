/*
Module 10.5 ;
6-intersection of two arrays: complete
find common elements of two arrays
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
    int n1,n2;
    //input arrays
    cout<<"input size and array 1"<<"\n";
    cin>>n1;
    int array1[n1];
    cout<<"array 1"<<"\n";
    for(int i=0; i<n1; i++){
        cin>>array1[i];
    }
    cout<<"input size and array 2"<<"\n"; 
    cin>>n2;    
    int array2[n2];
    cout<<"array 2"<<"\n";
    for(int i=0; i<n2; i++){
        cin>>array2[i];
    }
    int flag=0;
    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            if(array1[i]==array2[j]){
                cout<<array1[i]<<" ";
                flag=1;
            }
        }
    }
    if(flag==0) cout<<"Empty set"<<"\n";
    return 0;
}
