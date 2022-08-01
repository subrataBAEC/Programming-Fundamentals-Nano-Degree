/*
Module 11: vid 3
Bubble sort with optimization

1. redundant testing inside iteratin
2. reduntant iteration
*/

#include <bits/stdc++.h>
using namespace std;

//function
void printArray(int array[],int size){
    for(int i=0; i<size; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}


int main(){
    cout<<"enter array size and elements"<<endl;
    int n;
    cin>>n;//size
    int array[n];
    //array input
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
    cout<<"Before bubble sorting"<<endl;
    printArray(array,n);

    //bubble sort algorithm
    for(int i=1; i<n; i++){
        int flag=0;
        cout<<"iteration no: "<<i<<endl;

        for(int j=0; j<n-i; j++){ //instead of n-1
            if(array[j]>array[j+1]){
                swap(array[j],array[j+1]);
                flag=1;
            }
            printArray(array,n);
         }
        if(flag==0) break;
        // printArray(array,n);
    }
    cout<<endl;
    cout<<"final after sorting"<<endl;
    printArray(array,n);

   
            
    
    return 0;
}
