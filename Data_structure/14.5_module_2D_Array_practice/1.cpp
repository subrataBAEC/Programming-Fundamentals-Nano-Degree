/*
Module 14.5 ;
1-complete
avoid duplicate sum
access each element according to swastika pattern, sum and make that element zero.
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
    //input
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>array[i][j];            
        }
    }
    cout<<"\n";
    // //print pattern
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         //upper left part
    //         if(i==0 && j<=(n/2)) array[i][j]=a;
    //         //upper right part
    //         if(i<=(n/2) && j==(n-1)) array[i][j]=a;
    //         //lower left part
    //         if(i>=(n/2) && j==0) array[i][j]=a;
    //         //lower right part
    //         if(i==(n-1) && j>=(n/2)) array[i][j]=a;
    //         //mid vertical line
    //         if(j==(n/2)) array[i][j]=a;
    //         //mid horizontal line
    //         if(i==(n/2)) array[i][j]=a;            
            
    //     }
    // }
    // }

    //output-sum
    int sum=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            //upper left part
            if(i==0 && j<=(n/2)){
                
                sum=sum+array[i][j];
                cout<<"index: "<<i<<","<<j<<" "<<"element "<<array[i][j]<<" "<<" sum= "<<sum<<endl;
                array[i][j]=0;
            }
            //upper right part
            if(i<=(n/2) && j==(n-1)) {
                sum=sum+array[i][j];
                cout<<"index: "<<i<<","<<j<<" "<<"element "<<array[i][j]<<" "<<" sum= "<<sum<<endl;
                array[i][j]=0;
            }
            //lower left part
            if(i>=(n/2) && j==0) {
                sum=sum+array[i][j];
                cout<<"index: "<<i<<","<<j<<" "<<"element "<<array[i][j]<<" "<<" sum= "<<sum<<endl;
                array[i][j]=0;
            }
            //lower right part
            if(i==(n-1) && j>=(n/2)) {
                sum=sum+array[i][j];
                cout<<"index: "<<i<<","<<j<<" "<<"element "<<array[i][j]<<" "<<" sum= "<<sum<<endl;
                array[i][j]=0;
            }
            //mid vertical line
            if(j==(n/2)) {
                sum=sum+array[i][j];
                cout<<"index: "<<i<<","<<j<<" "<<"element "<<array[i][j]<<" "<<" sum= "<<sum<<endl;
                array[i][j]=0;
            }
            //mid horizontal line
            if(i==(n/2)) {
                sum=sum+array[i][j];
                cout<<"index: "<<i<<","<<j<<" "<<"element "<<array[i][j]<<" "<<" sum= "<<sum<<endl;
            }   array[i][j]=0;
            
        }
    }
    cout<<"sum= "<<sum<<"\n";
   
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<array[i][j]<<"  ";
        }
        cout<<"\n";
    }

    return 0;
}