/*
-----------------------------------
subrata saha
Scientific Officer
Bangladesh Atomic Energy Commission
Dhaka, Bangladesh.
subratabaec@gmail.com
Date: 14 January, 2023
----------------------------------------
*/
/*


*/

// CodeForces 1213/A - Chips Moving
#include<bits/stdc++.h> // all in one
using namespace std;

#define For(i,a,b) for(int i=a; i<=b; i++)
#define ll long long
int main(){
    int even=0;
    int odd=0;

    int n;
    cin>>n;
    ll digit;
    For(i,1,n){
        cin>>digit;
        if(digit%2==0){
            even++;
        }
    }
    
    odd=n-even;
    int res=min(even,odd);
    cout<<res<<endl;   
    
}
/*

*/