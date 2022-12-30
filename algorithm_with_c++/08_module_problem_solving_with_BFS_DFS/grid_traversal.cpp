/*
https://cses.fi/problemset/task/1193

count steps to reach from A to B:

5 8
########
#.A#...#
#.##.#B#
#......#
########

Output:
YES
9
LDDRRRRRU

Note:
# is forbidden
. is ok.

# -> -1
. 0-> 0

surrounding/ adjacent nodes:

(5,6) --> right -> (5,7)
(5,6) --> left  -> (5, 5)
(5,6)  -> up ---> (4,6)
(5,6) ---> down --> (6,6)

(x,y) -> right -> (x+1, y)
(x,y) -> left -> (x-1, y)
(x,y) -> up -> (x, y-1)
(x,y) -> down -> (x, y+1)

x  y
-- -
0  1
0  -1
-1  0
1   0

dx[]={0, 0, -1, 1} // up, down. left, right
dy[]={1, -1, 0, 0}

for( int i=0; i<4; i++){
    int new_x=x+dx[i]
    int new_y=y+dy[i]
}

conditions check:
1. is the cell within the maze?
2. is the cell forbidden or wall?
3. is the cell visited?

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

// cond 1: is the cell within the maze?
bool is_inside(pair<int, int>coord){
    int x=coord.first;
    int y= coord.second;

    if((x>=0 && x<n) && (y>=0 && y<m)){
        return true;
    }
    return false;
}

// cond 2: is the cell forbidden or wall?
bool is_safe(pair<int, int>coord){
    int x=coord.first;
    int y= coord.second;

    if(maze[x][y]==-1){
        return false;
    }
    return true;
}

void bfs(pair<int, int>src){
    queue<pair<int,int>>q;
    visited[src.first][src.second]=1;
    level[src.first][src.second]=0;

    q.push(src);
    while(!q.empty()){
        pair<int, int>head=q.front();
        q.pop();

        int x=head.first;
        int y=head.second;

        // get 4 adj nodes in 4 directions
        for(int i=0; i<4; i++){
            int new_x=x+dx[i];
            int new_y=y+dy[i];
            pair<int, int>adj_node={new_x, new_y};
        
            // push them after checking
            if(is_inside(adj_node) && is_safe(adj_node) && visited[new_x][new_y]==0){
                visited[new_x][new_y]=1;
                level[new_x][new_y]=level[x][y]+1;
                q.push(adj_node);
            }
        }
    }


}

int main(){
    // int n,m; // row, col
    cin>>n>>m;

    pair<int, int>src, dst; // source, destination
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            level[i][j]=-1;
        }
    }

    for(int i=0; i<n; i++){
        string input; // each row is a string
        cin>>input;
        for(int j=0; j<m; j++){
            if(input[j]=='#'){
                maze[i][j]=-1;
            }
            else if(input[j]=='A'){
                src={i,j};
            }
            else if(input[j]=='B'){
                dst={i,j};
            }
        }
    }

    // for(int i = 0 ; i < n ; i++) {
    //     for(int j = 0; j < m ; j++) {
    //         cout<<maze[i][j]<<"\t";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;

    bfs(src);

    if(level[dst.first][dst.second] == -1){
        cout<<"not possible to reach";
    }
    else{
        cout<<"reached"<<endl;
        cout<<level[dst.first][dst.second]<<endl;
    }


}
