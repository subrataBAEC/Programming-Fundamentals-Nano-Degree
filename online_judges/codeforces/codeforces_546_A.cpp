//codeforces 546/A complete
/* 
*/

#include<bits/stdc++.h> // all in one
using namespace std;

int main(){
    int k,n,w,sum=0; 
    cin>>k>>n>>w;
    
    for(int i=1; i<=w; i++){
        sum=sum+k*i;
    }
    //cout<<sum;

    if(sum<n) cout<<0<<endl;
    else {
        int res=sum-n;
        cout<<res<<endl;
    }  
    
    return 0;
}
