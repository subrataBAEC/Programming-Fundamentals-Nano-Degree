/*
Module 15.5 ; practice problem-2D array;
complete
Q4-method 1
help: https://www.geeksforgeeks.org/efficiently-compute-sums-of-diagonals-of-a-matrix/
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
    
    //sum diagonal elements
    //primary diag= 0,0-1,1-2,2-3,3-4,4-5,5-array[row][row]
    //secondary diag= 0,4-1,3-2,2-3,1::row,(n-1-row)
    int sum_p=0;
    int sum_s=0;
    int sum_first_row=0;
    int sum_last_row=0;

    for (int i = 0; i < row; i++){
        for(int j=0; j<col; j++){
                           
            //primary diag
            if(i==j){
                sum_p=sum_p+array[i][j];
                cout<<array[i][j]<<" ";
            }
            //secondary diag
            if(i+j==row-1){
                sum_s=sum_s+array[i][j];
                cout<<array[i][j]<<" ";
            }
            //first row
            if(i==0) sum_first_row=sum_first_row+array[i][j];    
            //last row
            if(i==row-1) sum_last_row=sum_last_row+array[i][j];           
        }
    }
    //finding duplicates
    int dup=array[0][0]+array[0][col-1]+array[row/2][col/2]+array[row-1][0]+array[row-1][col-1];
    int sum=sum_p+sum_s+sum_first_row+sum_last_row;
    cout<<endl<<sum_p<<" "<<sum_s<<" "<<sum_first_row<<" "<<sum_last_row<<" "<<sum<<endl;
    cout<<sum-dup;

   
    
    return 0;
}