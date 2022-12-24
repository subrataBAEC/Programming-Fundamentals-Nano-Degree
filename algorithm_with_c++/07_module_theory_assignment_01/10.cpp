/*
Course: Algorithm with C++
Theory Assignment 01
question no. 10 (in complete)
    i) DFS without recursion(using stack)
    ii) compare DFS with or without recursion
*/

/*
example : 1

      1
     /  \
    5----4     3
    \    /\   /
     \  /  \ /
       0----2

6 8

1 5
1 4
5 0
4 0
5 4
4 2
0 2
2 3
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

    int src=1;
    DFS(src);
}
