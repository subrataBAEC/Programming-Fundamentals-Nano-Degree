/* Graph Representation:
adjacency list / C++ vector
>> undirected and unweighted graph
------------------
-------------------

# Graph nodes and edges:
0------- 1
        / \
        2--3

total nodes=4
total edges=4


0 -> 1
1 -> 0, 2, 3
2 -> 1, 3
3 -> 1, 2

# if number of nodes is n, number of edge is n^2
adjacency list
------------------
spcace complexity: O(n^2)
time complexity:  O(n^2)
*/
#include<bits/stdc++.h>
using namespace std;

int main(){

    int nodes=4; // time complexity: O(1), space complexity: O(1)
    vector<int>adj_list[nodes]; // time complexity: O(1), space complexity: O(n)

    // time complexity: O(n^2), space complexity: O(n^2)
    adj_list[0]={1};
    adj_list[1]={0, 2, 3};
    adj_list[2]={1, 3};
    adj_list[3]={1, 2};

    // time complexity: O(n^2), space complexity: O(1) as no additional space is used
    for(int i=0; i<nodes; i++){
        cout<<i<<" -> ";
        for(int j=0; j<adj_list[i].size(); j++){
            cout<<adj_list[i][j]<<" ";
        }
        cout<<endl;
    }


return 0;
}
