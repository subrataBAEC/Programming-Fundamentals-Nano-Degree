
/* Single Source Shortest Path Using modified BFS

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
2 3
1 5
2 4
5 4
1 2

*/

#include<bits/stdc++.h>
using namespace std;

const int N=1e5;
int visited[N];
int level[N]; // to store level of each node
vector<int>adj_list[N];

void BFS(int node){
    queue<int>q;
    visited[node]=1;
    q.push(node);
    level[node]=0; 

    while(!q.empty()){
        int head=q.front();
        q.pop();

        cout<<head<<" ";

        for(int adj_node: adj_list[head]){
            if(visited[adj_node]==0){
                level[adj_node]=level[head]+1; // level of child= parent level+1
                visited[adj_node]=1;
                q.push(adj_node);
            }
        }
    }
}

int main(){
    int nodes, edges;
    cin>>nodes>>edges;

    for(int i=0; i<edges; i++){
        int u,v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    
    int src=0;
    cout<<"BFS node traversal: ";
    BFS(src);

    cout<<"level: shortest distance of the node from the source or root"<<endl;
    for(int i=0; i<nodes; i++){
        cout<<"node "<<i<<"->"<<" level "<<level[i]<<endl;
    }
}