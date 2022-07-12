//codeforces 136/A complete
/* 
make index to value
idea help:https://www.youtube.com/watch?v=B-peP5QT0P0&ab_channel=bProgrammer
*/
#include<bits/stdc++.h> // all in one
using namespace std;
int main() {
    int k;
    cin>>k;
    int friends[k],to_gift[k];
   
    for(int i=1; i<=k; i++){
        cin>>friends[i];
        //value becomes index
        //index becomes value
        to_gift[friends[i]]=i;
    }

    for(int i=1; i<=k; i++){
        cout<<to_gift[i]<<" ";
    }    
    return 0;
}