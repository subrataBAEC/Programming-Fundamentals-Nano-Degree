/*
Module 14.5 ;
5-make duplicate elements of a matrix -1: complete
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
    //input
    int max=0;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>array[i][j];    
            if(max<array[i][j]) max=array[i][j];        
        }
    }
    cout<<"max "<<max<<"\n";
    
    //freq array size should be max value of array
    int sz=max+1;
    int freq[sz]={0};
    // for(int i=0; i<row; i++){
    //     for(int j=0; j<col; j++){
    //         freq[array[i][j]]++;
    //         //cout<<"index "<<i<<" "<<j<<" "<<array[i][j]<<endl;
    //     }
    // }
    // //print freq array
    // cout<<"\n"<<"freq array "<<"\n";
    // for(int i=0; i<sz; i++){
    //     cout<<freq[i]<<" ";
    // }
    //replace duplicate elements
    //int freq[]={0};
    cout<<"\n"<<"duplicate elemets to -1 "<<"\n";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if (freq[array[i][j]]>0){
                //cout<<i<<" "<<j<<" "<<array[i][j]<<endl;
                array[i][j]=-1;
            }
            else freq[array[i][j]]++;
        }
    }
    //output
    cout<<"\n";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<array[i][j]<<" ";            
        }
        cout<<"\n";
    }
    cout<<"\n";

    return 0;
}
