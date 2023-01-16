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
64 {count till sqrt(n)}
64/2=32
32/3=
32/4=8
8/5=
8/6
8/7
8/8=1




*/

// CodeForces 1294/C - Product of Three Numbers
#include<bits/stdc++.h> // all in one
using namespace std;

void solve(long long int n){
    // cout<<n;
    int count=0;
    vector<long long int>v;
    
    for(int i=2; i*i<=n ; i++){ // iterate until square root
        
        if((n%i)==0){
            n=n/i;
            // cout<<i<<" "<<n<<endl;
            count++;
            v.push_back(i);

        }
        if(count==2){ // 3rd is the last updated n
            v.push_back(n);
            count++;
            break;
        }
    }
    if(count==3 &&v[1]!=v[2]){
        cout<<"YES"<<endl;
        for(int i=0; i<3; i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
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
        long long int n;
        cin>>n;
        solve(n);
    }
}