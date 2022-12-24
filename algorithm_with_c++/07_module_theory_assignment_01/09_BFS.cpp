// multi edge and self loop testing: BFS

/* BFS using recursion:

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
1 5
5 4
2 3
2 4

example : 2
0 ----1-----2------3
      |     |
      |     |
      5-----4

simple graph:
6 6

0 1
1 2
2 3
1 5
5 4
2 4


multiple edges: 0--1, 2---3
self loop: 1---1
nodes edges
6 11

0 1 
0 1
5 4
5 4
2 3
1 2
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

void BFS(int node){
   queue<int>q;
   visited[node]=1;
   q.push(node);

   while(!q.empty()){
    int head=q.front();
    q.pop();

    cout<<head<<" ";

    for(int adj_node: adj_list[head]){
        if (visited[adj_node]==0){
            visited[adj_node]=1;
            q.push(adj_node);
        }
    }
   }
}

int main(){
    int nodes, edges;
    cout<<"nodes, edges"<<endl;
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
    BFS(src);
}

/*
BFS and DFS does not act differently on graphs with multi edge and
selp loop because, an array called visited is used to track the visited nodes.
let, initially all nodes are zero in the visited array,so when a node is visited 
for the first time, that index becomes 1 in the visited array and if that node appers again in the program flow, 
it is ignored and flow goes to the next adjacent node.
so slef loop and multi edge has no effect on BFS and DFS traversal.

*/