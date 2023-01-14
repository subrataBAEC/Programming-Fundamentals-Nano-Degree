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
n=5 (1 2 3 4 5)

case 1: (if either first or last at correct pos or, both ar correct pos, one operation is enough )
3 1 2 4 5
-------
1 2 3 4 5

1 3 2 4 5 
  --------
1 2 3 4 5


cas 2: (if both first and last at reverse, 3 operation is enough )
5 2 4 3 1
-------
2 3 4 5 1
  -------
2 1 3 4 5
---
1 2 3 4 5

case 3: is sorted (0 step)

case 4: (otherwise 2 step is needed)
2 3 5 1 4
-------
1 2 3 5 4
      ---
1 2 3 4 5

*/

// CodeForces 1525/B - permutation sort
#include<bits/stdc++.h> // all in one
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        vector<int>v;

        int n, a;
        cin>>n;
        for(int j=1; j<=n; j++){
            cin>>a;
            v.push_back(a);
        }
        // for(int k=0; k<n; k++){
        //     cout<<v[k];
        // }

        // if sorted
        // case 3:  
        int flag=0;
        for(int j=0; j<n; j++){
            if(v[j]!=j+1){
                flag=1; // not sorted
            }
        }
        if (flag==0){ // sorted
            cout<<0<<endl;
        }
        else{
            if(v[0]==1 || v[n-1]==n){
                // cout<<v[0]<<v[n-1]<<endl;
                cout<<1<<endl;
            }
            // case 2:
            else if(v[0]==n && v[n-1]==1){
                // cout<<v[0]<<v[n-1]<<endl;
                cout<<3<<endl;
            }
            // case 4:
            else{
                cout<<2<<endl;
            }
        }       

    }
}
/*
1
5
2 3 4 1 5
*/