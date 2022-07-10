//codeforces 1030/A complete
/* 
*/

#include<bits/stdc++.h> // all in one
using namespace std;

int main(){
    int n; 
    cin>>n;
    int opinion[n];

   for(int i=0; i<n; i++){
        cin>>opinion[i];
    }
    int flag=0;

    for(int i=0; i<n; i++){
        
        if(opinion[i]==1){
            flag=1;
            cout<<"HARD"<<endl;
            break;
        }
        else flag=0;
    }
    if(flag==0) cout<<"EASY"<<endl;
    return 0;
}
