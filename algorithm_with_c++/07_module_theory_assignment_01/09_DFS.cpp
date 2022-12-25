// multi edge and self loop testing: DFS

/* DFS using recursion:

example : 1
0 ----1 ----2------3
      |     |
      |     |
      5-----4

no. of nodes = 6
no. of edges = 6

list of adj nodes
(input format)
nodes edges
6 6

0 1
1 2
2 3
1 5
5 4
2 4

example : 2
0 ----1     2------3
      |     |
      |     |
      5-----4

multiple edges: 0--1, 2---3
self loop: 1---1
nodes edges
6 10

0 1 
0 1
5 4
5 4
2 3
2 3
1 1
1 5
0 1
2 4
*/



#include<bits/stdc++.h>
using namespace std;
const int N=1e5; //visited array size

int visited[N];
vector<int>adj_list[N];

void DFS(int node){
    cout<<node<<" ";
    visited[node]=1;

    for(int adj_node: adj_list[node]){
        if (visited[adj_node]==0 ){ // if unvisited
            DFS(adj_node);
        }
    }
}

int main(){
    int nodes, edges;
    cout<<"enter nodes, edges"<<endl;
    cin>>nodes>>edges;

    for(int i=0; i<edges; i++){
        int u,v;
        cin>>u>>v;

        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    // print edges
    for(int i=0; i<nodes; i++){
    cout<<i<<" -> ";
    for(int j=0; j<adj_list[i].size(); j++){
        cout<<adj_list[i][j]<<" ";
    }
    cout<<endl;
    }

    int src=0;
    DFS(src);
}
