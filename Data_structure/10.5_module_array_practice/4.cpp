/*
Module 10.5 ;
4-max-min in an array: complete
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
    //mac-min value
    int max=array[0],min=array[0];
    int maxIndex,minIndex;
    for(int i=0; i<n; i++){
        if(array[i]>max){
            max=array[i];
            maxIndex=i;
        }
        if(array[i]<min) {
            min=array[i];
            minIndex=i;
        }
    }
    cout<<"Max: "<<max<<" index: "<<maxIndex<<"\n";
    cout<<"Min: "<<min<<" index: "<<minIndex<<"\n";
    /*another method-using sort
    sort the array and max=array[n-1], min=array[0]
    */
    return 0;
}
