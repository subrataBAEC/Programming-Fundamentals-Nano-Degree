/*
<complete>
Q 6. https://cses.fi/problemset/task/1679/
- topological sort(using BFS)

condition for topological sort:
- graph must be acyclic.

example 1:

5 3
1 2
3 1
4 5

Output:
3 4 1 5 2

example 2:(has cycle)
5 4
1 2
3 1
2 3
4 5

Output:
IMPOSSIBLE

## condition for topological sort:
------------------------------------
- graph must be directed, acyclic (DAG).

## steps:
---------
1. input adjacent list.
2. creat indegree array/vector of size[node], intial value zero, declare a queue for BFS.
3. increment indegree vector according to indgree of each node.
4. insert the node with indegree==0 in the queue.
5. while(queue is not empty), 
   -decrement indegree of adjacent nodes by 1.
   - if indegree becomes zero, push to queue.
6. use stack to count nodes, if count !=nodes, there is a cycle, so topological sort is not possible.
7. if count==nodes, print nodes from the output queue.
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
        // cout<<count<<endl;
        while(!output.empty()){
            int head=output.front();
            output.pop();
            cout<<head<<" ";
        }
    }
    else{
        cout<<"IMPOSSIBLE"<<endl;
    }

}

int main(){
    int n,m;// node, edge
    cin>>n>>m;

    for(int i=0; i<m; i++){
        int u,v;
        cin>>u>>v;

        adj_list[u].push_back(v);
    }

    top_sort(n,adj_list);     
}