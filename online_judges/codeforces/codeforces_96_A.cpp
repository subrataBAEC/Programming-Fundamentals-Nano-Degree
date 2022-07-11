//codeforces 96/A complete
/* 
*/

#include<bits/stdc++.h> // all in one
using namespace std;

int main(){
    string s; 
    cin>>s;
    int len=s.length();
    int count0=0,count1=0,flag=0;
   
    for(int i=0; i<len; i++){
        if(s[i]=='1') {
            count1++;
            count0=0;
        }       
  
        else if(s[i]=='0'){
            count0++;
            count1=0;
        } 
        //cout<<count0<<" "<<count1<<" "<<endl;
        if(count0==7 || count1==7){
            flag=1;
            break;
        }            
    }
    if(flag==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl; 
    return 0;
}
