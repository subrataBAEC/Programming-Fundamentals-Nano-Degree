/*
Module 15.5 ; practice problem-2D array;
Q5: complete
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int row,col;
    cin>>row;
    col=row;//square matrix
    int array[row][col];
   
    //input and find max value
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
    //sum diagonal elements
    //primary diag= 0,0-1,1-2,2-3,3-4,4-5,5-array[row][row]
    //secondary diag= 0,4-1,3-2,2-3,1::row,(n-1-row)
    int sum_rows=0;
    int sum_cols=0;
    int dup=0;

    for (int i = 0; i < row; i++){
        for(int j=0; j<col; j++){
            
            //rows
            if((i%2)!=0){
                sum_rows=sum_rows+array[i][j];
                //cout<<array[i][j]<<" ";
            }
            //cols
            if((j%2)!=0){
                sum_cols=sum_cols+array[i][j];
                //cout<<array[i][j]<<" ";
            }
            if( (i%2)!=0 && (j%2)!=0 ){
                dup=dup+array[i][j];
                cout<<array[i][j]<<" ";
            }      
        }
    }
    
    int sum=sum_rows+sum_cols;
    cout<<endl<<sum_rows<<" "<<sum_cols<<endl;
    cout<<sum-dup;  
    
    return 0;
}