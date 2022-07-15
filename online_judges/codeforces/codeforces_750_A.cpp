//codeforces 750/A complete
/* 
*/

#include<bits/stdc++.h> // all in one
using namespace std;

int main(){
    int n,k; 
    cin>>n>>k;
    int time=240-k,res,total=0;
    int count=0;
    
    for(int i=1; i<=n; i++){
       //res=i*5;
       total=total+i*5; 
       if(total<=time) count++;
       //cout<<count;
    }
    cout<<count<<endl;;  
    
    return 0;
}
