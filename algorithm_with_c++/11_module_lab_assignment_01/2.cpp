/*
<complete>
Q 2. https://cses.fi/problemset/task/1194
- steps to reach the boundary
Input:
5 8
########
#M..A..#
#.#.M#.#
#M#..#..
#.######

Output:
YES
5
*/

#include<bits/stdc++.h>
using namespace std;
const int N=2002;

int maze[N][N];
int visited[N][N];
int level[N][N];
int n,m;

int dx[]={0, 0, -1, 1};
int dy[]={1, -1, 0, 0};



// within the boundary?
bool is_inside(pair<int,int>coord){
    int x=coord.first;
    int y=coord.second;

    if((x>=0 && x<n) && (y>=0 && y<m)){ // within boundaey
        return true;
    }
    return false;
}
//forbidden cell- wall/ monster
bool is_safe(pair<int,int>coord){
    int x=coord.first;
    int y= coord.second;

    if(maze[x][y]==-1){
        return false;
    }
    return true;
}
//bfs
bool flag=false;

void bfs(pair<int, int>src){
    queue<pair<int, int>>q;
    visited[src.first][src.second]=1;
    level[src.first][src.second]=0;

    q.push(src);
    while(!q.empty()){
        pair<int, int>head;
        head=q.front();
        q.pop();

        int x=head.first;
        int y=head.second;

        // adj nodes in left, right, up, down
        for(int i=0; i<4; i++){
            int new_x=x+dx[i]; // new co.ordinate
            int new_y=y+dy[i];

            pair<int, int>adj_node={new_x,new_y};

            //push after checking
            if(is_inside(adj_node) && is_safe(adj_node) && visited[new_x][new_y]==0){
                visited[new_x][new_y]=1;
                level[new_x][new_y]=level[x][y]+1;
                q.push(adj_node);

                // if reached boundary, ans and break the loop
                if((new_x==0 || new_x==n-1) || (new_y==0 || new_y==m-1)){
                    flag=true;
                    cout<<"possible"<<endl;
                    cout<<"steps: "<<level[new_x][new_y]<<endl;
                    break;
                }
            }
        }
    }
    if(flag==false){
        cout<<"not possible"<<endl;
    }

}

int main(){
    cin>>n>>m;
    pair<int,int>src;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            level[i][j]=-1;
        }
    }
    //input
    for(int i=0; i<n; i++){
        string input;
        cin>>input;

        for(int j=0; j<m; j++){
            if(input[j]=='#' || input[j]=='M'){
                maze[i][j]=-1;
            }
            else if(input[j]=='A'){
                src={i,j};
            }

        }
    }
    //input check
    // for(int i = 0 ; i < n ; i++) {
    //     for(int j = 0; j < m ; j++) {
    //         cout<<maze[i][j]<<"\t";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    
    //run bfs
    bfs(src);

}