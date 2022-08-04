/*
Module 14-counting sort
*/

#include <bits/stdc++.h>
using namespace std;

//print array
printArray(int array[],int n){
    for(int i=0; i<n; i++){
        cout<<array[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    int array[n];
    //array input
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
    printArray(array,n);
    // step 1: find max value
    return 0;
}
