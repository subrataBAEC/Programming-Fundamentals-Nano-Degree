/*
Lab Final exam
- complete

No: 8
Name: Kamal's neighbour

*/

#include <bits/stdc++.h>
using namespace std;

vector<int> v[100];
bool visited[100];


void DFS(int source,int &count)
{
    
    visited[source] = true;
    //cout<<source<<" ";
    //cout<<"node with level"<<endl;
    for (int i = 0; i < v[source].size(); i++)
    {
        int children = v[source][i];
        if (visited[children] == false)
        {
            count++;
            DFS(children,count);
        }
    }
}

int main()
{
    int n, e; // no. of nodes, edges
    cin >> n >> e;

    for (int i = 0; i < e; i++) // make connections
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        //v[b].push_back(a);
    }
    memset(visited, false, sizeof(visited));
    int count=0;
    //cout<<"nodes"<<endl;
    int source;
    cin>>source;
    DFS(source,count);
    //cout<<endl;
    cout<<count;
    return 0;
}
/*
6 5
0 1
0 2
2 3
3 0
4 5
2



7 7
1 2
1 6
2 3
2 4
6 4
6 7
4 5
*/