/*
Lab Final exam
- complete

No: 7
Name: kamal's neighbourhood
*/

#include <bits/stdc++.h>
using namespace std;
vector<int> v[100]; // max no. of nodes
//bool visited[100];



int main()
{
    int n, e;
    cin >> n >> e;

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    // memset(visited, false, sizeof(visited));
    // BFS(1);

    int k;
    cin>>k;
    cout<<v[k].size()<<endl;
}

/*
6 5
0 1
0 2
0 3
2 3
4 5
2

*/