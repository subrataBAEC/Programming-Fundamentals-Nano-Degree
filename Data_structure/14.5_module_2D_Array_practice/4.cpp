/*
Module 14.5 ;
4-reverse matrix columns:complete
method: 
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    cout<<"input row,col and elements of 2D array"<<"\n";
    int row,col;
    cin>>row>>col;
    int array[row][col];
    //input
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>array[i][j];            
        }
    }
    cout<<"\n";
    //reversing cols
    for(int i=0; i<row; i++){
        int temp;
        for(int j=0; j<col/2; j++){
            temp=array[i][j];
            array[i][j]=array[i][col-1-j];
            array[i][col-j-1]=temp;
        }
    }
    //output
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<array[i][j]<<" ";            
        }
        cout<<"\n";
    }
    cout<<"\n";

    return 0;
}
