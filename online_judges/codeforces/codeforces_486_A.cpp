//codeforces 486/A complete
/* 
if n==even
sum=n/2
if odd
sum=-(n/2+1)
*/

#include<bits/stdc++.h> // all in one
using namespace std;

int main(){
    long long int n,sum; 
    cin>>n;
    // in this way, time exceeds
    // for(int i=1; i<=n; i++){
    //     if((i%2)!=0){
    //         sum=sum+(i*-1);
    //     }
    //     else{
    //         sum=sum+i;
    //     }
    // }

    if(n%2==0){
        sum=(n/2);
        cout<<sum<<endl;
    }
    else{
        sum=-(n/2+1);
        cout<<sum<<endl;
    }
    return 0;
}
