
// application of fllod fill algorithm
/*
https://cses.fi/problemset/task/1192

count steps to reach from A to B:

Input:
5 8
########
#..#...#
####.#.#
#..#...#
########

Output:
3

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

ans: count the connected components in a graph
- if the cell is within the maze,
- is the cell forbiddeno or wall
- while there exists an empty cell
    - find an empty unvisited cell
    - run bfs() from that cell
*/

#include<bits/stdc++.h>
using namespace std;
const int N=2002;

int maze[N][N];
int visited[N][N];
int n,m;

int dx[]={0, 0, -1, 1};
int dy[]={1, -1, 0, 0};

// cell within the maze?
bool is_inside(pair<int, int>coordinate){
    int x=coordinate.first;
    int y=coordinate.second;

    if((x>=0 && x<n) && (y>0 && y<m)){
        return true;
    }
    else{
        return false;
    }
}

// is the cell forbidden?
bool is_safe(pair<int, int> coordinate){
    int x=coordinate.first;
    int y=coordinate.second;

    if(maze[x][y]==-1){
        return false; // this is a wall cell
    }
    return true;
}

// returns an unvisited cell co-ordinate
pair<int, int>find_unvisited(){

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            // if the cell is unvisited and not a wall(#)
            if(visited[i][j]==0 && maze[i][j]==0){
                return {i,j};
            }
        }
    }
    // if no cell is found 
    return {-1, -1};

}

void bfs(pair<int, int> src){
    queue<pair<int, int>>q;
    visited[src.first][src.second]=1;

    q.push(src);
    while(!q.empty()){
        pair<int, int>head=q.front();
        q.pop();

        int x=head.first;
        int y=head.second;

        //get adj nodes in up, down. left, right
        for(int i=0; i<4; i++){
            int new_x=x+dx[i];
            int new_y=y+dy[i];
            pair<int, int>adj_node={new_x, new_y};

            // push after chekcing
            if(is_inside(adj_node) && is_safe(adj_node) && visited[new_x][new_y]==0){
                visited[new_x][new_y]=1;
                q.push(adj_node);
            }
        }

    }

}

int main(){
    cin>>n>>m; // row, col
    
    for(int i=0; i<n; i++){
        string input;
        cin>>input;

        for(int j=0; j<m; j++){
            if(input[j]=='#'){
                maze[i][j]=-1;
            }
        }
    }    
    //maze input check
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<m; j++){
    //         cout<<maze[i][j]<<"\t";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;

    // run bfs 
    int room_count=0;
    while(true){
        pair<int, int>unvisied_pos=find_unvisited();
        if(unvisied_pos == pair<int, int>(-1, -1)){ // no co ordinate is left
            break;
        }
        bfs(unvisied_pos);
        room_count++;
    }
    cout<<room_count;
}

