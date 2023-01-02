
/*
<complete>
Q 1. Write code to solve the single source shortest path problem on a DAG 
using DFS.Take both the DAG and the source node as input and output the 
distance of each node.

Input:

example : 1
0 ----1     2------3
      |     |
      |     |
      5-----4

nodes edges
6 5

0 1
1 5
4 2
5 4
2 3

example 2: 

input
7 9
0 1
0 2
1 3
1 4
3 6
4 6
2 5
5 4
5 6
output:
0 - 0
1 - 1
2 - 1
3 - 2
4 - 2
5 - 2
6 - 3
*/
#include<bits/stdc++.h>
using namespace std;
const int N=2e5;

int visited[N];
int level[N];
vector<int>adj_list[N];

// sssp using dfs on DAG
void sssp(int node){
    visited[node]=1;
    // level[node]=0; //src node=0

    for(int adj_node: adj_list[node]){
        // cout<<"node: "<<node<<" adj_node: "<<adj_node<<endl;

        if(visited[adj_node]==0){
            level[adj_node]=level[node]+1;
            //cout<<"node: "<<node<<" adj_node: "<<adj_node<<endl;
            //cout<<"level[node] "<<level[node]<<" level[adj] "<< level[adj_node]<<endl;
            sssp(adj_node);
        }
    }
}

int main(){
    int n,m;// node, edge
    cin>>n>>m;

    for(int i=0; i<m; i++){
        int u,v;
        cin>>u>>v;

        adj_list[u].push_back(v);//directed graph
    }

    int src=0;
    sssp(src);

    //print level of nodes
    for(int i=0; i<n; i++){
        cout<<"node: "<<i<<" level: "<<level[i]<<endl;
    }    
}


