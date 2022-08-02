/*
Module 14.5 ;
2-Major and minor diagonalsL: complete
*/

#include <bits/stdc++.h>
using namespace std;


//print array
// void print2DArray(int n,int array[n][n]){
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n;j++){
//             cout<<array[i][j]<<" ";
//         }
//         cout<<"\n";

//     }
//     cout<<"\n";
// }

int main(){
    cout<<"input size and 2D array"<<"\n";
    int n;
    cin>>n;
    int array[n][n];

    //input
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>array[i][j];
        }

    }
    //output 1-major diagonals(method 1)
    cout<<"major diagonal elements:method 1(duble loop): ";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            //cout<<array[i][j];
            if(i==j) cout<<array[i][j]<<" ";
        }
    }
    cout<<"\n";

    cout<<"major diagonal elements:method 2(single loop): ";
    for(int i=0; i<n; i++){ 
            cout<<array[i][i]<<" ";
        }
    cout<<"\n";

    //output 2-minor diagonals
    cout<<"minor diagonal elements(single loop)): ";
    for(int i=0; i<n; i++){

        cout<<array[i][n-1-i]<<" ";
    }
        cout<<"\n";   

    return 0;
}
