/*
-----------------------------------
subrata saha
Scientific Officer
Bangladesh Atomic Energy Commission
Dhaka, Bangladesh.
subratabaec@gmail.com
Date: 16 January, 2023
----------------------------------------
*/
/*





*/

// CodeForces 1294/A - Collecting Coins
#include<bits/stdc++.h> // all in one
using namespace std;
typedef long long ll;

void solve(vector<ll> v){
    //sort
    sort(v.begin(),v.end());
    
    // for(int i=0; i<4; i++){
    //         cout<<v[i]<<" ";
    //     }
    
    // diff from the max coins, min at v[0], max at v[2], total at v[3]
    ll diff=0;
    ll total=v[3];
    diff=v[2]-v[0];
    diff+=v[2]-v[1];
    // cout<<diff<<total;      

    if(total>=diff){       
        total=total-diff; // rest in hand
        if(total%3==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;

        }   

    }
    else{
        cout<<"NO"<<endl;
    }

}

int main(){
    int t;
    cin>>t;
    while(t--){
        // cout<<t;
        ll a,b,c,n,x;
        vector<ll>v;

        for(int i=0; i<4; i++){
            cin>>x;
            v.push_back(x);
        }
        // for(int i=0; i<4; i++){
        //     cout<<v[i]<<" ";
        // }

        solve(v);
    }
}