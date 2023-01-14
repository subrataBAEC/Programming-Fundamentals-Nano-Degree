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
condition: i th number <= i+1 th number

if the number is fully reverse
5 4 3 2 1
maximum no. of steps require to sort is 
      n(n-1)
=   ---------
       2
but the condiiotn is we can use (n(n-1)/2)-1 steps.
      n(n-1)
=   --------- -1
        2
so if the number is fully reverse ans is No.

*/

// CodeForces 1420/A - Cubes Sorting
#include<bits/stdc++.h> // all in one
using namespace std;

#define For(i,a,b) for(int i=a; i<=b; i++)
#define ll long long
int main(){
    int t;
    cin>>t;
    int n;
    for(int i=0; i<t; i++){
        cin>>n;
        vector<int>v;
        For(j,1,n){
            int x;
            cin>>x;
            v.push_back(x);
        }
        int count=0;
        for(int j=0; j<n-1; j++){
            if(v[j]>v[j+1]){
                count++;
            }
            // cout<<v[j]<<v[j+1]<<count<<endl;
        }
        if(count==n-1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }


}