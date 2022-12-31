
// application of graph coloring algorithm
/*
https://cses.fi/problemset/task/1668

5 3
1 2
1 3
4 5 
Output -> possible variations
1 2 2 1 2
1 2 2 2 1
2 1 1 2 1

(2)  (1)
1 -- 2
|
3
(1)
(2)  (1)
4 -- 5

*/
#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;

int visited[N];
int color[N];

vector<int>adj_list[N];

bool dfs(int node){
    // cout<<node;
    visited[node]=1;

    for(int adj_node: adj_list[node]){
        if(visited[adj_node]==0){// new node
            // assign a different color from the parent node
            if(color[node]==1) color[adj_node]=2;
            else color[adj_node]=1;
            
            bool is_bicolorable=dfs(adj_node);
            if(!is_bicolorable){
                return false;
            }
        }
        else{ // adj node is alreadt colored, check is different
            if(color[node]==color[adj_node]){
                return false;
            }
        }

    }
    return true;
}

int main(){
    int nodes, edges;
    cin>>nodes>>edges; // friends, relations

    for(int i=0; i<edges; i++){
        int u, v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    // int src=0;
    // dfs(src);

    bool flag=true;
    for(int i=1; i<=nodes; i++){
        if(visited[i]==0){ // new node
            color[i]=1; //assign color
            bool is_bicolorable=dfs(i);
            if(!is_bicolorable){ // graph is not bi colorable
                flag=false;
                break;
            }
        }
    }

    if(flag==false){
        cout<<"IMPOSSIBLE"<<endl;
    }
    else{ // print node colors
        for(int i=1; i<=nodes; i++){
            cout<<color[i]<<" ";
        }
        cout<<endl;
    }

}