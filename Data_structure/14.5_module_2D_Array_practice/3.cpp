/*
Module 14.5 ;
3-Identity matrix: complete
method 1: single loop
method 2: double loop
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    cout<<"input size of 2D array"<<"\n";
    int n;
    cin>>n;
    int array[n][n];

    //method-1
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j) array[i][j]=1;
            else array[i][j]=0;
        }
    }
    //method-2
    //initialize all elements to zero using memset
    memset(array,0, sizeof(array));
    for(int i=0; i<n; i++){
        array[i][i]=1; 
    }
    //output -identity matrix(method 1)
    cout<<"Identity matrix "<<"\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<array[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";

    return 0;
}
