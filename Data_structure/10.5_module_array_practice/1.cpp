/*
Module 10.5 ;
1-sum all elements: complete
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
    //input
//input array
    for(int i=0; i<n; i++){
        cin>>array[i];
        sum=sum+array[i];
    }
    cout<<sum;
    
    return 0;
}
