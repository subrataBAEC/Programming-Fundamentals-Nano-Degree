/* Graph Representation:
adjacency matrix
------------------
-------------------

# Graph nodes and edges:
0------- 1
        / \
        2--3

total nodes=4
total edges=4
undirected and unweighted graph

# matrix -> 4 * 4

# matrix[i][j]=1 if and only if i->j

# Node Connections: 
0 --> 1
1 --> 0
1 --> 2
2 --> 1
1 --> 3
3 --> 1
2 --> 3
3 --> 2

adjacency matrix
------------------
spcace complexity: Big O(n^2)
time complexity: Big O(n^2)
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int nodes=4; // spcace complex: Big O(1), , space complex: Big O(1)

    // initially zero 
    // for(int i=0; i< nodes; i++){
    //     for(int j=0; j<nodes; j++){
    //         matrix[i][j]=0;
    //     }
    // }

    int matrix[nodes][nodes]={}; // time complex: Big O(n^2), space complex: Big O(n^2)

    // edge connections
    matrix[0][1]=1; // every line time complex: Big O(1), , space complex: Big O(1)
    matrix[1][0]=1;

    matrix[1][2]=1;
    matrix[2][1]=1;

    matrix[1][3]=1;
    matrix[3][1]=1;

    matrix[2][3]=1;
    matrix[3][2]=1;

    // time complex: Big O(n^2)
    for(int i=0; i< nodes; i++){
        for(int j=0; j<nodes; j++){
            cout<<matrix[i][j]<<" "; 
        }
        cout<<endl;
    }
    return 0;
}

