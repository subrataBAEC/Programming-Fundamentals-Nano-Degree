/*
Module 15.5 ; practice problem-2D array;
complete
Q3. WAP that will take inputs of m x n sized matrix into a 2D array and find the maximum element with index location from that matrix.
Sample input
3 3
1 2 3
4 5 6
2 9 2
Max: 9
Location: [2][1]

2 3
9 8 7
3 4 5
Max: 9
Location: [0][0]
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int row,col;
    cin>>row>>col;
    int array[row][col];
    //input
    for (int i = 0; i < row; i++){
        for(int j=0; j<col; j++){
            cin>>array[i][j];
        }
    }
    //find max element with index
    int max=array[0][0];
    int a=0,b=0;
    for (int i = 0; i < row; i++){
        for(int j=0; j<col; j++){
            if(array[i][j]>max){
                max=array[i][j];
                a=i;
                b=j;
            }
        }
    }
    cout<<"max: "<<max<<"\n";
    cout<<"["<<a<<"]"<<"["<<b<<"]"<<"\n";
   
    
    return 0;
}