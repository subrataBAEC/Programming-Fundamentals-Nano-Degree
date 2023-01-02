/*
<complete>

Q 3. Write code to solve cycle detection in a directed graph using BFS.

- solve:  by using topological sort to detect cycle in a Directed graph using BFS.

## condition for topological sort:
- graph must be acyclic.

## count the nodes from stack
   - if count==nodes-> no cycle
   - else, cycle detected
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
const int N=2e5;

int visited[N];
vector<int>adj_list[N];
// vector<int>indegree[N];

void top_sort(int nodes, vector<int>adj_list[N]){
    
    // checking
    // for(int i=1; i<=nodes; i++){
    //     cout<<i<<" -> ";
    //     for(int j=0; j<adj_list[i].size(); j++){
    //         cout<<adj_list[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    queue<int>q;
    vector<int>indegree(nodes+1,0); // initial values to zero

    for(int i=1; i<=nodes; i++){
        for(int j=0; j<adj_list[i].size(); j++){
            indegree[adj_list[i][j]]++;
        }
    }
    // // check top sorting
    // for(int i=1; i<=nodes; i++){
    //     cout<<indegree[i]<<" ";
    // }

    // insert first node into queue which has indegress==0
    for(int i=1; i<=nodes; i++){
        if(indegree[i]==0){
            q.push(i);
            // cout<<i<<endl;
        }
    }

    stack<int>st; // for counting nodes
    queue<int>output; // for output

    while(!q.empty()){
        int head=q.front();
        q.pop();
        st.push(head); // this is for counting
        output.push(head); // this is for output print
        // cout<<head<<" ";

        // decrement indegree by 1 of child nodes
        for(int adj_node: adj_list[head]){
            // cout<<adj_node<<" ";
            indegree[adj_node]--;
            if(indegree[adj_node]==0){
                q.push(adj_node);
            }
        }
        // again check indegree
        // for(int i=1; i<=nodes; i++){
        //     cout<<indegree[i]<<" ";
        // }
        // cout<<endl;
    

    }
    // count nodes to check cycle exists or not
    int count=0;
    while(!st.empty()){
        int head=st.top();
        count++;
        st.pop();
        // cout<<head<<" ";
    }
    if(count==nodes){ // print nodes
        cout<<"no cycle detected"<<endl;
        while(!output.empty()){
            int head=output.front();
            output.pop();
            cout<<head<<" ";
        }
    }
    else{
        cout<<"cycle detected"<<endl;
    }

}

int main(){
    int n,m;// node, edge
    cin>>n>>m;

    for(int i=0; i<m; i++){
        int u,v;
        cin>>u>>v;

        adj_list[u].push_back(v); // directed
    }

    top_sort(n,adj_list);     
}