//codeforces 677/A complete
/* 
*/

#include<bits/stdc++.h> // all in one
using namespace std;

int main(){
    int n,h; 
    cin>>n>>h;
    int people[n];

   for(int i=0; i<n; i++){
        cin>>people[i];
    }

    int width=0;

    for(int i=0; i<n; i++){
        
        if(people[i]<=h){
            width=width+1;
        }
        else width=width+2;
    }

    cout<<width<<endl;
    return 0;
}
