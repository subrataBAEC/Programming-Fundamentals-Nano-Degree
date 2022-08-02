/*
Module 14.5 ;
5-make duplicate elements of a matrix -1: in complete
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

    //count element frequensy and creat freq. array
    int sz=row*col;
    int freq[sz]={0};
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            freq[array[i][j]]++;
            //cout<<"index "<<i<<" "<<j<<" "<<array[i][j]<<endl;
        }
    }
    //print freq array
    cout<<"\n";
    for(int i=0; i<sz; i++){
        cout<<freq[i]<<" ";
    }
    //output
    cout<<"\n"<<"duplicate elemets to -1 "<<"\n";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            for(int k=0;k<sz;k++){
                if(freq[k]>1){
                    array[i][j]=-1;
                }
            }
        }
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<array[i][j]<<" ";            
        }
        cout<<"\n";
    }
    cout<<"\n";

    return 0;
}
