//codeforces 1328/A complete
/* 
using two for loops causes time limit problem
*/
#include<bits/stdc++.h> // all in one
using namespace std;
int main() {
    long long int t,a,b;
    cin>>t;   
    // this creates time limit problem
    // for(int i=0; i<t; i++){
    //     long long int count=0;
    //     cin>>a>>b;
    //     for(int i=0; ;i++){
    //        if((a%b)==0){
    //         break;
    //        }
    //        count++;
    //        a++; 
    //     }
    //     cout<<count<<endl;    
    // }
    int res;
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