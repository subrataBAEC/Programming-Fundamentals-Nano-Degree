/*complete
Module 11.5:G
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int n,k;
        cin>>n>>k;
        int a[n]={0};
        //input
        int count=0;
        for(int j=0; j<n; j++){
            cin>>a[j];
            if(a[j]>k) count++;
        }
        cout<<count<<endl;
        
    }     
    
    return 0;
}
