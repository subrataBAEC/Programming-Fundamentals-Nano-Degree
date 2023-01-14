/*
subrata saha
Scientific Officer
Bangladesh Atomic Energy Commission
subratabaec@gmail.com
Dhaka, Bangladesh
Date: 13 January, 2023
*/
/*

*/

// CodeForces 1462/A - Favorite Sequence
#include<bits/stdc++.h> // all in one
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n, digit;
        cin>>n;
        vector<long long int>arr={0};
        long long int a[n];
        for(int j=0; j<n; j++){
            cin>>digit;
            // arr.push_back(digit);
            a[j]=digit;
        }

        for(int j=0, k=n-1; j<=k; j++, k--){
            if(j==k){
                cout<<a[j]<<endl;
            }
            else{
                cout<<a[j]<<" "<<a[k]<<" ";                
            }
        }
        // cout<<endl;
    }
}

/* 
2
7
3 4 5 2 9 1 1
4
9 2 7 1
*/