//codeforces 1328/A complete
/* 

*/
#include<bits/stdc++.h> // all in one
using namespace std;
int main() {
    long long int t,a,b;
    cin>>t;   

    int res=0;
    for(int i=0; i<t; i++){
        cin>>a>>b;
        if(a%b==0) cout<<0<<endl;
        else{
            res=b-(a%b);
            cout<<res<<endl;
        }
    }

    return 0;
}