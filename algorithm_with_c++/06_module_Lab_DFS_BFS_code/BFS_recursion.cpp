
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
2 3
1 5
2 4
5 4
1 2

example : 2
0 ----1     2------3
      |     |
      |     |
      5-----4

no. of nodes = 6
no. of edges = 5

list of adj nodes
(input format)
nodes edges
6 5

0 1
2 3
1 5
5 4
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

    int src=0;
    BFS(src);
}

