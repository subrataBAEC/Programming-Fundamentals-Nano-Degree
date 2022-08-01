/*
Module 10: vid 5
Binary search
array must be sorted and have no duplicate values
*/

#include <bits/stdc++.h>
using namespace std;

//function
int binarySearch(int array[], int x, int lb, int ub){
    if(lb<=ub){
        //mid value
        int mid=(lb+ub)/2;
        //if x==array[mid]
        if(x==array[mid]){
            return mid;
        }
        //if x>array[mid] -- right
        else if(x>array[mid]){
            binarySearch(array,x,mid+1,ub);
        }
        //if x<array[mid] -- left
        else if(x<array[mid]){
            binarySearch(array,x,0,mid-1);
        }
    }
       
    else{
        return -1;
    }
}


int main(){
    cout<<"enter array size and elements"<<endl;
    int n;
    cin>>n;
    int array[n];
    //array input
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
    cout<<"want to search?(Y/N) ";
    char c;
    cin>>c;

    while(toupper(c)=='Y'){
        //searching
        cout<<"which value you want to seach ";
        int value;
        cin>>value;
        //int flag=0;
        //call Binary searching function
        int index;
        index=binarySearch(array,value,0,n-1);
        if(index!=-1){
            cout<<"index "<<index<<" pos "<<index+1<<endl;
        }
        else if(index==-1){
            cout<<"not found"<<endl;
        }
        cout<<"want to search again? ";
        cin>>c;
            
    }
    return 0;
}
