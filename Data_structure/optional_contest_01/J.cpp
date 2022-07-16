//J complete
/* 

*/

#include<bits/stdc++.h> // all in one
using namespace std;

int main(){
    int n,a,b,count=0,sum=0;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>a>>b;
        count=(b-a)+1;
        sum=sum+count;
    }
    cout<<sum<<endl;
    return 0;
}
