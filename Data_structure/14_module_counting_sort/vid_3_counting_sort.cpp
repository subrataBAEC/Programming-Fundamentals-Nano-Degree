/*
Module 14-counting sort
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
    cout<<"enter size and array elements: Counting Sort"<<"\n";
    int n;
    cin>>n;
    int array[n];
    //array input
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
    printArray(array,n);
    // step 1: find max value
    int max=INT_MIN;
    for(int i=0; i<n; i++){
        if(array[i]>max) max=array[i];
    }
    //step 2: initializing count array
    int count[max+1]={0};
    // for(int i=0; i<(max+1); i++){
    //     count[i]=0;
    // }
    //step 3: calculate Frequency array
    for(int i=0; i<n; i++){

        count[array[i]]++;
    }
    printArray(count,max+1);
    //step 4: cumulative sum
    for(int i=0; i<(max+1); i++){//untill max+1
        count[i]=count[i]+count[i-1];
    }
    printArray(count,max+1);
    //step 5: Final sorting
    int final[n]={0};
    for(int i=n-1; i>=0; i--){
        count[array[i]]--;
        int k=count[array[i]];
        final[k]=array[i];
    }
    cout<<"finar-after sorting"<<endl;
    printArray(final,n);
    return 0;
}
