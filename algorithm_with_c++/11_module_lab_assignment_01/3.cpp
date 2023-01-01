
/*
<incomplete>
Q 3. Write code to solve cycle detection in a directed graph using BFS.

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
|  |
2--4

4 4
1 3
2 1
2 4
3 4

Output:
no cycle detected

- visited[adj_node] == 0 -> unexplored node |apply dfs
- visited[adj_node] == 1 -> "paused" node | cycle detected
- visited[adj_node] == 2 -> "done" node | continue

example : 3(cycle)

2--3
\  |
 \ |
  4----1---5 
5 5
2 3
3 4
4 2
4 1
1 5


example : 4(no cycle)
3-->2-->1-->4

4 3
3 2
2 1
1 4

example : 5(has cycle)
        3 
      / |
1---2   |
     \  | 
       4

4 4
1 2
2 3
3 4
4 2

*/
#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;

int visited[N];
vector<int>adj_list[N];

bool bfs(int node){
    queue<int>q;
    visited[node]=1;
    q.push(node);

    while(!q.empty()){
        int head=q.front();
        cout<<head<<" ";
        q.pop();

        for(int adj_node: adj_list[head]){
            // if(visited[adj_node]==1){
            //     return true;               
            // }
            if(visited[adj_node]==0){// new node
                visited[adj_node]=1; // make visted then push
                q.push(adj_node);
            }
            // if finds already visited node- cycle
            else if(visited[adj_node]==1){
                return true;               
            }
        }
        // cout<<1;

    }
    visited[node]=2;
    cout<<node<<"- "<<visited[node]<<endl;
    return false; // no cycle

}

int main(){
    int n,m;// node, edge
    cin>>n>>m;

    for(int i=0; i<m; i++){
        int u,v;
        cin>>u>>v;

        adj_list[u].push_back(v);
    }

    bool has_cycle=false;
    // loop over all nodes
    for(int i=1; i<=n; i++){
        if(visited[i]==0){
            cout<<endl<<i<<endl;
            bool res=bfs(i);
            if(res){
                has_cycle=true;
                break;
            }
        }
    }
    if(has_cycle==true){
    cout<<"cycle exists"<<endl;
    }
    else{
        cout<<"no cycle"<<endl;
    }
}


