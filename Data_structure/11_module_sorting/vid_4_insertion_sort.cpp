/*
Module 11: vid 4
Insertion sort
*/

#include <bits/stdc++.h>
using namespace std;

//function-- array print
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

    //Insertion sort algorithm
    int key;
    for(int i=1; i<n; i++){
        key=array[i];
        int j=i-1;
        cout<<endl<<"i: "<<i<<" j: "<<j<<" key: "<<key<<endl;
        while(array[j]>key && j>=0){
            array[j+1]=array[j];
            printArray(array,n);
            j--;
        }
        array[j+1]=key;
        printArray(array,n);
    }
    cout<<endl;
    cout<<"final after sorting"<<endl;
    printArray(array,n);

   
            
    
    return 0;
}
