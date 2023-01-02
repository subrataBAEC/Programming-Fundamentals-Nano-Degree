
/*
<complete>
Q 4 . Write code to solve cycle detection in a undirected graph using DFS.
name: round trip, https://cses.fi/problemset/task/1669
*/

/*
this is similar but directed graph, Round Trip II: https://cses.fi/problemset/task/1678/


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
4 4
2 1
2 3
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

bool detect_cycle(int node,int parent){
    // cout<<node<<" "<<parent<<endl;
    visited[node]=1; // selected node=1
    for(int adj_node: adj_list[node]){
        //cout<<"parent: "<<parent<<" node:"<<node<<" adj_node: "<<adj_node<<endl;
        // if new node
        if(visited[adj_node]==0){
            bool got_cycle=detect_cycle(adj_node,node); // return true if childs has cycle

            if(got_cycle){
                return true;
            }
        }
        //if paused node,already visited node and adj_node !=parent node: detect cycle
        else if(visited[adj_node]==1 && adj_node!=parent){
            // cout<<"true condition matched: "<<parent<<" "<<node<<" "<<adj_node<<endl;
            return true;
        }
        // // if done node
        // else if(visited[adj_node]==2){
        //     continue;
        // }

    }
    // if for loop ends, no "true" is returned, return false, no cycle
    // visited[node]=2;
    return false;
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
        if(visited[i]==0){ // if new node, call DSF
            cout<<endl;
            bool got_cycle=detect_cycle(i,-1); //true, if cycle, (node, parent_node=-1)
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