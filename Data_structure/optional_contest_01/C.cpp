//C complete
/* 
*/

#include<bits/stdc++.h> // all in one
using namespace std;

int main(){
    int A,B,res; 
    cin>>A>>B;
    if(A==B) res=0;

    if(A>=2 && B>=2){
        if(A>B) res=1;
        else if(A<B) res=2;
        //else res=0;
    }
    if(A==1 && B!=1) res=1;
    else if(B==1 && A!=1) res=2;
    
    
    if(res==1) cout<<"Alice"<<endl;
    if(res==2) cout<<"Bob"<<endl;
    if(res==0) cout<<"Draw"<<endl;

    
    return 0;
}
