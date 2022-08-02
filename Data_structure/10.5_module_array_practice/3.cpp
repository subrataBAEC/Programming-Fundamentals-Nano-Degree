/*
Module 10.5 ;
3-reverse array: complete
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
    cout<<"one method-using one extra array"<<"\n";
    //reverse index
    int rev_array[n];
    int i,j;
    for(i=0,j=n-1; i<n; i++,j--){
        rev_array[j]=array[i];
    }
    //output
    printArray(rev_array,n);

    //another method- no extra array
    cout<<"another method-no extra array"<<"\n";
    int temp;
    for(int i=0; i<(n/2); i++){
        temp=array[i];
        array[i]=array[n-1-i];
        array[n-1-i]=temp;
    }
    printArray(array,n);
    
    return 0;
}
