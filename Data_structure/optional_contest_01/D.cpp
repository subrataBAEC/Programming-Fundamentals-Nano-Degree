//D complete
/* 
*/

#include<bits/stdc++.h> // all in one
using namespace std;

int main(){
    string s; 
    cin>>s;
    int len=s.length(),res=0,a,b;
    //cout<<len<<endl;
    //find A from beginning
    for(int i=0; i<len; i++){
        //cout<<i<<" "<<s[i]<<endl;
        if(s[i]=='A'){
            //cout<<i<<endl;
            a=i;
            break;
        }
    }
    //find z from last
    for(int i=len-1; i>=0; i--){
        //cout<<i<<" "<<s[i]<<endl;
        if(s[i]=='Z'){
            //cout<<i<<endl;
            b=i;
            break;
        }
    }
    res=b-a+1;
    cout<<res<<endl;

    
    return 0;
}
