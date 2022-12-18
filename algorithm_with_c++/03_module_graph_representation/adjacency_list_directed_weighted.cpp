/* Graph Representation:
adjacency list / C++ vector
>> directed and weighted graph
------------------
-------------------

# Graph nodes and edges:
0------- 1
        / \
        2--3

directed and weighted:
    2
0 ----> 1
    4
1 ----> 2
    8
3 ----> 2
    7
3 ----> 1

node --> (node, weight)
0 --> (1, 2)
1 --> (2, 4)
2 --> 
3 --> (2, 8), (1,7)
*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int nodes=4; 
    vector< pair<int, int> >adj_list[nodes]; 

    // adj_list[0].push_back(pair<int, int>(1,2)); // old method

    // method 1: using push back
    // adj_list[0].push_back({1,2});
    // adj_list[1].push_back({2,4});
    // adj_list[3].push_back({2,8});
    // adj_list[3].push_back({1,7});

    // method 2:another method for initialization
    adj_list[0]={{1,2}};
    adj_list[1]={{2,4}};
    adj_list[2]={};
    adj_list[3]={{2,8}, {1,7}};
   
    for(int i=0; i<nodes; i++){
        cout<<i<<" -> ";
        for(int j=0; j<adj_list[i].size(); j++){
            cout<<"("<<adj_list[i][j].first<<", "<<adj_list[i][j].second<<") ";
        }
        cout<<endl;
    }
return 0;
}