
/*
<complete>
Q 5 . Write code to solve the problem https://cses.fi/problemset/task/1669 again using BFS.
name: round trip, https://cses.fi/problemset/task/1669
*/

/*
this is undirected graph, similar to Round Trip II: https://cses.fi/problemset/task/1678/
also similar to problem 4 but now this is in BFS.

Input:

1--3
| /|
2--4

example : 1
4 5
1 3
2 1
2 4
3 2
3 4

Output:
cycle detected

example : 2
1--3
   |
2--4

4 3
1 3
3 4
2 4

Output:
no cycle detected

example : 3

2----1
\   /
 \ /
  3---4
4 3
2 1
1 3
3 4
*/
/*
logic: 
needs to keep track of the parent node.

- visited[adj_node] == 0 -> unexplored node |apply dfs
- visited[adj_node] == 1 -> "paused" node | cycle detected
- visited[adj_node] == 1 and adj_node==parent node -> still no cycle
- visited[adj_node] == 1 and adj_node!=parent node -> cycle detected

*/
#include<bits/stdc++.h>
using namespace std;
const int N=2e5;

vector<int>adj_list[N];
int visited[N];

bool detect_cycle_bfs(int node, int parent){
    queue<pair<int, int>>q; // node, paraent/previous node
    visited[node]=1;
    q.push({node,-1}); //node, parent

    while(!q.empty()){
        int head=q.front().first; //node
        int parent=q.front().second; //parent
        q.pop();

        for(int adj_node: adj_list[head]){
            if(visited[adj_node]==0){// new node
                visited[adj_node]=1; // make visited, then push
                q.push({adj_node, head}); // node, parent or previous node
                // cout<<"parent: "<<parent<<" head: "<<head<<" adj_node: "<<adj_node<<endl;
            }
            // if finds, already visited node and node != parent node: cycle detected
            else if(visited[adj_node]==1 && adj_node!=parent){
                // cout<<"true condition "<<parent<<" "<<head<<" "<<adj_node<<endl;
                return true;               
            }
        }

    }
    // visited[node]=2;
    // cout<<node<<"- "<<visited[node]<<endl;
    return false; // no cycle
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

    // detect cycle
    bool has_cycle=false;


    for(int i=1; i<=n; i++){
        if(visited[i]==0){ // if new node, call BFS
            cout<<endl;
            bool got_cycle=detect_cycle_bfs(i,-1); //true, if cycle, (node, parent_node=-1)
            if(got_cycle){
                has_cycle=true;
                break;
            }
        }
    }
    if(has_cycle){
        cout<<"cycle exists"<<endl;
    }
    else{
        cout<<"no cycle"<<endl;
    }
}