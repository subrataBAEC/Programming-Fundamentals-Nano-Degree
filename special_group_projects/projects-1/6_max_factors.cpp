/*
----------------------
Name:  subrata saha
email: subratabaec@gmail.com
Date: Jan 7, 2023
-----------------------
//max factors//
timed out

*/

#include <bits/stdc++.h>
using namespace std;

void prime_factor(int num){
    int count=0;

    for(int i=2; num>1; i++){
        while(num%i==0){
            // cout<<i<<" ";
            num=num/i;
            count++;
        }
    }
    cout<<count<<"\n";
    
}


int main(){
    // for fast I/O
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>a;
        prime_factor(a);
        // cout<<endl;
    }
}