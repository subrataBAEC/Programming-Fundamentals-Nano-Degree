// E incomplete
/* 
*/

#include<bits/stdc++.h> // all in one
using namespace std;

int main(){
    int n,res=0,res1;
    cin>>n;
    int result[6]={0};
    int count;

    for(int i=1;i<=n; i++){
        if(res>n) break;
        res=pow(2,i);
        cout<<res<<" ";
        result[i]=res;
        
    }
    cout<<endl;
    cout<<res<<" "<<endl;

    for(int i=1;i<=6; i++){
        cout<<result[i]<<" ";
    }
    
    return 0;
}
