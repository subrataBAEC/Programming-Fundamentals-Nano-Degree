/*
----------------------
Name:  subrata saha
email: subratabaec@gmail.com
Date: Jan 7, 2023
-----------------------
//L to R//
timed out

*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n, q, a,b, res;//a=L, b=R
    cin>>n;
    long long int array[n];
    for(long long int i=1; i<=n; i++){
        cin>>array[i];
    }

    // for(long long int i=1; i<=n; i++){
    //     cout<<array[i];
    // }
    cin>>q;
    for(long long int i=0; i<q; i++){
        cin>>a>>b;
        res=array[a]*array[b];
        cout<<res<<"\n";
    }
}