/*
Module 14.5 ;
print swastika pattern
*/

#include <bits/stdc++.h>
using namespace std;



int main(){
    cout<<"input size and 2D array"<<"\n";
    int n;
    cin>>n;
    int array[n][n];
    memset(array,0,sizeof(array));
    int a=2;
    //print pattern
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            //upper left part
            if(i<=(n/2) && j==0) array[i][j]=a;
            //upper right part
            if(i==0 && j>=(n/2)) array[i][j]=a;
            //lower left part
            if(i==(n-1) && j<=(n/2)) array[i][j]=a;
            //lower right part
            if(i>=(n/2) && j==(n-1)) array[i][j]=a;
            //mid vertical line
            if(j==(n/2)) array[i][j]=a;
            //mid horizontal line
            if(i==(n/2)) array[i][j]=a;            
            
        }
    }
    // }
    //output
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<array[i][j]<<"  ";
        }
        cout<<"\n";
    }

    return 0;
}
