/*
path printing using BFS
link: https://cses.fi/problemset/task/1667

given->source=1, destination= last node n
Input:
5 5
1 2
1 3
1 4
2 3
5 4

Output:
3
1 4 5

*/
#include<bits/stdc++.h>
using namespace std;
const int N=2e5;

vector<int>adj_list[N];
int visited[N];
int level[N];
int parent[N];

// BFS
void bfs(int node){
    visited[node]=1;
    level[node]=1;  // source node level=1, not 0

    parent[node]=-1; // parent of source node

    queue<int>q;
    q.push(node);

    while(!q.empty()){
        int head=q.front();
        q.pop();

        for(int adj_node: adj_list[head]){
            if(visited[adj_node]==0){
                parent[adj_node]=head; // store the parent of the adj node in parent array
                visited[adj_node]=1;
                level[adj_node]=level[head]+1;
                q.push(adj_node);
            }
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
        adj_list[v].push_back(u);// undirected graph
    }
    
    int source_node=1;
    bfs(source_node);

    // no path to dest.
    int dst_node=n;
    if(visited[dst_node]==0){ // dst. node is not visited, so no way
        cout<<"IMPOSSIBLE\n";
    }
    else{
        //calculate minimum path length
        cout<<level[dst_node]<<endl;

        // print path
        int selected_node=dst_node;
        vector<int>path;

        while(true){
            path.push_back(selected_node);
            if(selected_node==source_node){
                break;
            }
            selected_node=parent[selected_node];
        }
        // print in reverse
        reverse(path.begin(), path.end());

        for(int node: path){
            cout<<node<<" ";
        }
        cout<<endl;       

    }   

}