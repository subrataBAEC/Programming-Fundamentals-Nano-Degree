//G complete
/* 
for a=odd, count=(b/x-a/x)
for a=even, count++
for a=b and a=b=odd, count
for a=b and a=even, count++(8 8 2)
*/

#include<bits/stdc++.h> // all in one
using namespace std;

int main(){
    unsigned long long int  a,b,x,count=0;
    cin>>a>>b>>x;

    //time exceeded
    // for(int i=a; i<=b; i++){
    //     if(i%x==0){
    //         count++;
    //     }
    // }
    
    if(a<b){
        count=(b/x)-(a/x);        
    }
    if(a%x==0) count++;
    // if((a/x)!=0){
    //     count--;
    // }   

    cout<<count<<endl;      
    
    return 0;
}
