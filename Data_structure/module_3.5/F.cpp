// F
/* 
sort in descending
then sum first k terms
*/

#include<bits/stdc++.h> // all in one 

using namespace std;

int main(){ 
    int n,k;
    cin>>n>>k;
    int l[n];

    for(int i=0; i<n; i++){
        cin>>l[i];
    }
    //sorting
    /*
    sort(l, l+n); // ascending
    for(int i=0; i<n; i++){
        cout<<l[i]<<" ";
    }
    cout<<endl;
    */
    sort(l, l+n, greater<int>());//descending
    //check
    // for(int i=0; i<n; i++){
    //     cout<<l[i]<<" ";
    // }
    // cout<<endl;
    int sum=0;
    for(int i=0; i<k; i++){
        sum=sum+l[i];
    }
    cout<<sum<<endl;
   
    return 0; 
}