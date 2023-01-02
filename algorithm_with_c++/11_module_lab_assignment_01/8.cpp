
/*
<complete>
Q 8. Write code to solve the following problem: https://cses.fi/problemset/task/1666
- merge two connected components

Input:

example : 1
1---2
3---4

Input:
4 2
1 2
3 4

Output:
1
2 3
*/
#include<bits/stdc++.h>
using namespace std;
const int N=2e5;

int visited[N];
vector<int>adj_list[N];
vector<int>f_nodes; // first node of each connected component


void dfs(int node){
    visited[node]=1;

    for(int adj_node: adj_list[node]){
        // cout<<"node: "<<node<<" adj_node: "<<adj_node<<endl;

        if(visited[adj_node]==0){
            dfs(adj_node);
        }
    }
}

int main(){
    int n,m;// node, edge
    cin>>n>>m;

    for(int i=0; i<m; i++){
        int u,v;
        cin>>u>>v;

        adj_list[u].push_back(v); //undirected graph
        adj_list[v].push_back(u);
    }

    int count=0;
    for(int i=1; i<=n; i++){
        if(visited[i]==0){ // if new node, call DFS
            count++; // count the connected components
            dfs(i);
            f_nodes.push_back(i); // first node each connected component
        }
    }
    // output
    int roads=count-1;
    cout<<roads<<endl;// new roads=connected components-1
    if(count>1){
        int city1=f_nodes[0];
        int city2;

        for(int i=1; i<=roads; i++){
            city2=f_nodes[i];
            cout<<city1<<" "<<city2<<endl;
            city1=city2;
        }
    }    
}