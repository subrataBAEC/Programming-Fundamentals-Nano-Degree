/*
Course: Algorithm with C++
Theory Assignment 01
question no. 02 (complete)
    This is a follow up of problem 1. 
    i) Trim all edges of the input graph where there is an edge 
    from u -> v but not v -> u. 
    ii) Output the number of edges you have to remove. 
    Use the same code to take input as problem 1.
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
    int count=0; // count non bi-dir. edges which nee to remove

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            // cout<<matrix[i][j]<<" ";
            if (matrix[i][j]==1 && matrix[j][i]!=matrix[i][j]){
                flag=0; // not bi.
                count++;
                matrix[i][j]=0;
            }
        }
    }
    cout<<"after trimming (if required)"<<endl;

    // matrix print again after trimming
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    if(flag==1){
        cout<<"bi-directional."<<endl<<"need to remove minimum "<<count<<" edges to make it bi-directional."<<endl;
    }
    else{
        cout<<"not bi-directional."<<endl<<"need to remove minimum "<<count<<" edges to make it bi-directional."<<endl;
    }
}

// const int N=1e5;
// vector<int>adj_list[N];

// int main(){
//     int n,m;
//     cin>>n>>m;

//     // graph input
//     for(int i=0; i<m; i++){
//         int u,v;
//         cin>>u>>v;
//         adj_list[u].push_back(v);
//         // adj_list[v].push_back(u);

//     }

//     // graph output
//     for(int i=0; i<n; i++){
//         cout<<i<<" --> ";
//         for(int j=0; j<adj_list[i].size(); j++){
//             cout<<adj_list[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     for(int i=0; i <n; i++){
//         for(int j=0; j<adj_list[i].size(); j++){
//             cout<<adj_list[i][j]<<" ";
//         }
//         cout<<endl;
//     }
        


// }