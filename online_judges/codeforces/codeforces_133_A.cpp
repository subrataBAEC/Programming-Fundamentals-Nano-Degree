//codeforces 133/A complete
/* 
'+' is ignored cz produce no output
*/

#include<bits/stdc++.h> // all in one
using namespace std;

int main(){
    string s; 
    cin>>s;
    int len=s.length();
    int count0=0,count1=0,flag=0;
   
    for(int i=0; i<len; i++){
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9') {
            flag=1;
            break;
        }
        else flag=0;       
    }
    if(flag==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl; 
    return 0;
}
