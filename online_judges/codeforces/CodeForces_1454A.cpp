/*
subrata saha
Scientific Officer
Bangladesh Atomic Energy Commission
subratabaec@gmail.com
Dhaka, Bangladesh
Date: 13 January, 2023
*/
/*
digit must be different from the position(index+1).

if n=5
arr -> 1 2 3 4 5
push in rev- > 5 4 3 2 1
only 3 matched with index, so swap it with any position 

if n=6
arr -> 1 2 3 4 5 6
push in rev- > 6 5 4 3 2 1
no problem, done.
*/

// CodeForces 1454/A - Special Permutation
#include<bits/stdc++.h> // all in one
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int k=0; k<t; k++){
        
        int n;
        cin>>n;
        vector<int>arr={0};
        
        //push into vecotr
        for(int i=n; i>=1; i--){
            arr.push_back(i);

        } 

        // output
        // if even- just print
        if(n%2==0){ 
            for(int i=1; i<=n; i++){
                cout<<arr[i]<<" ";
            }
        }
        // if odd- change the middle digit
        else{
            // cout<<n<<" "<<arr[(n/2)+1]<<" "<<arr[n]<<endl;
            swap(arr[(n/2)+1],arr[n]); //for n=5, n/2==index 2, we need index 3

            for(int i=1; i<=n; i++){
                cout<<arr[i]<<" ";
            }
        }
        cout<<endl;
    }
}