/*
Lab Final exam
- complete

No: 2
Name: Know your level
*/


#include <bits/stdc++.h>
using namespace std;

vector<int> v[100];
bool visited[100];

vector<int>nodes[100];

void BFS(int source)
{
    //cout << "nodes with level" << endl;
    queue<pair<int, int>> q;
    q.push({source, 0}); // initially source level 0
    while (!q.empty())
    {
        pair<int, int> parent = q.front();
        q.pop();

        if (visited[parent.first] != true) 
        {
            //cout << parent.first << " " << parent.second << endl;
            nodes[parent.second].push_back(parent.first); // keep nodes with same level in a vector
            for (int i = 0; i < v[parent.first].size(); i++)
            {
                int children = v[parent.first][i];
                if (visited[children] == false)
                {
                    int chilren_levl=parent.second+1;
                    q.push({children,chilren_levl}); //child level=parent level+1
                    // nodes[chilren_levl].push_back(parent.first);
                    // cout<<chilren_levl<<" "<<parent.first<<endl;
                }
            }
        }
        visited[parent.first]=true;
    }
}

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
    memset(visited, false, sizeof(visited));
    int level;
    cin>>level;

    BFS(0);

    //cout<<nodes[0].size()<<endl;
    
    for(int i=0; i<nodes[level].size(); i++){
        cout<<nodes[level][i]<<" ";
    }
    return 0;
}
/*
6 7
5 3
4 5
1 0
1 2
1 3
3 0
4 3
*/