//codeforces 148/A complete
/* 
affected dragons:
k=2; 2,4,6,8,10,12...24
l=3; 3,9,12,18,24
m=4; 4,8,12,16,20,24
n=5; 5,10,15,20
*/
#include<bits/stdc++.h> // all in one
using namespace std;
int main() {
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int count=0;
   
    for(int i=1; i<=d; i++){
        if((i%k==0)||(i%l==0)||(i%m==0)||(i%n==0)){
            count++;
            //cout<<i<<" ";
        }
    }
    cout<<count<<endl;   
    
    return 0;
}