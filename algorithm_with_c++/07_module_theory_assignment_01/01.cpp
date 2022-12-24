/*
Course: Algorithm with C++
Theory Assignment 01
question no. 01 (complete)
    Write a program that takes a directed graph as input and checks whether 
    it is bi-directionoal which means for every pair of nodes where there is an edge u -> v, 
    there should also be an edge v -> u.
*/

/*
Test Cases: 
example : 1 (bi-directional)

no. of nodes = 6
no. of edges = 6

nodes edges
6 6

0 1
1 2
1 0
2 1
1 5
5 1

example : 2 (not bi-directional)

no. of nodes = 6
no. of edges = 6

nodes edges
6 6

0 1
2 3
1 0
1 5
3 2
2 4

example : 3 (all not bi-directional)

no. of nodes = 6
no. of edges = 6

nodes edges
6 6

0 1
2 3
1 2
1 5
3 1
2 4
*/


#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,m; // nodes, edges
    cin>>n>>m;

    int matrix[n][n]={};
    int u,v;
    // input
    for(int i=0; i<m; i++){
        cin>>u>>v;
        matrix[u][v]=1;
        // matrix[v][u]=1;
    }
    cout<<endl;
    // matrix print
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    
    // check bidirectionality

    int flag=1; // default: bi.
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            // cout<<matrix[i][j]<<" ";
            if (matrix[i][j]==1 && matrix[j][i]!=matrix[i][j]){
                flag=0; // not bi.
            }
        }
    }
    cout<<endl;
    if(flag==1){
        cout<<"bi-directional"<<endl;
    }
    else{
        cout<<"not bi-directional"<<endl;
    }

}