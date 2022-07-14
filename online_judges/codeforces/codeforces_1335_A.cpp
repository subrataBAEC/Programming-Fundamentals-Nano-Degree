//codeforces 1335/A complete
/* 
*/

#include<bits/stdc++.h> // all in one
using namespace std;

int main(){
    long long int t,n; 
    cin>>t;
    int count=0;
    for(int i=0; i<t; i++){
        cin>>n;
        count=(n-1)/2; 
        cout<<count<<endl;       
    }  
    
    return 0;
}
