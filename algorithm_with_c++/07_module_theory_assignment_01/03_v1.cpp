/*
Course: Algorithm with C++
Theory Assignment 01
question no. 03 (complete)
    Write a program to take an undirected graph as input and count the 
    number of connected components in it.
*/

/*
Test Cases: un directed graph/ bi-directional graph
example : 1 

0------- 1
        / \
       /   \
      2-----3

4---5

nodes edges
6 5

0 1
1 2
1 3
2 3
4 5

example : 2 

0------- 1
        / \
       /   \
      2-----3

4---5
6

nodes edges
7 5

0 1
1 2
1 3
2 3
4 5

example : 3

0------- 1
        / \
       /   \
      2-----3

4---5
6---7
8

nodes edges
9 6

0 1
1 2
1 3
2 3
4 5
6 7

*/

#include<bits/stdc++.h>
using namespace std;
const int N=1e5; //visited array size

int visited[N];
vector<int>adj_list[N];

void DFS(int node){
    if (visited[node]==0){ // print only when not visited
        cout<<node<<" ";
    }
    visited[node]=1;    

    for(int adj_node: adj_list[node]){
        if(visited[adj_node]==0){
            DFS(adj_node);   
        }
    }


}

int main(){
    int n,m;
    cin>>n>>m;

    for(int i=0; i<m; i++){
        int u,v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    cout<<endl;

    // call DFS
    int src=1;
    DFS(src);

    cout<<endl;
    int count=1;
    for(int i=0; i<n; i++){
        // cout<<visited[i]<<" ";
        if(visited[i]!=1){
            count++;
            DFS(i);
            cout<<endl;
        }
    }
    cout<<endl<<"connected components: "<<count;
    
    // this only works when source is 0
    // int src=0;
    // for(int i=src; i<n; i++){
    //     DFS(i);
    //     cout<<endl;
    // }
}