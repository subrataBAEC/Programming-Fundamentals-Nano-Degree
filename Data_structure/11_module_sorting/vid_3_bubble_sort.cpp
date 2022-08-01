/*
Module 11: vid 3
Bubble sort

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
    for(int i=0; i<n; i++){
        cout<<"iteration no: "<<i+1<<endl;
        for(int j=0; j<n-1; j++){
            if(array[j]>array[j+1]){
                swap(array[j],array[j+1]);
            }
            printArray(array,n);
        }
        // printArray(array,n);
    }
    cout<<endl;

   
            
    
    return 0;
}
