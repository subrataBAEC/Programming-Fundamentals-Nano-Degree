/* Graph Representation:
edge list
>> directed and weighted graph
------------------
-------------------

# Graph nodes and edges:
0------- 1
        / \
        2--3

*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int node=4;
    vector<vector<int>> edge_list={
        //{node, node, weight}
        {0, 1, 2},
        {1, 2, 4},
        {1, 3, 9},
        {2, 3, 1},
    };

    for(int i=0; i<edge_list.size(); i++){
        cout<<edge_list[i][0]<<"---> "<<edge_list[i][1]<<" | "<<edge_list[i][2]<<endl;
    }
    return 0;
}