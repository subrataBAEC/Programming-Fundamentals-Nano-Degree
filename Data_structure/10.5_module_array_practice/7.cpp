/*
Module 10.5 ;
7:find elements divisible by 3,replace them with -1: complete
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
    cout<<"input size and array "<<"\n";
    cin>>n1;
    int array1[n1];
    cout<<"array"<<"\n";
    for(int i=0; i<n1; i++){
        cin>>array1[i];
    }
    //output
    for(int i=0; i<n1; i++){
        if((array1[i]%3)==0) array1[i]=-1;
    }
    printArray(array1,n1);
    return 0;
}
