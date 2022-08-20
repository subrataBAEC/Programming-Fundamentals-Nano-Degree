/*complete
Module 12: G
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int len=s.size();
    int flag=1;
    for(int i=0; i<len; i++){
         
        if(s[i]!=s[len-i-1]){
        flag=0;
        break;
        //cout<<s[i]<<" "<<s[len-1-i]<<endl;
      }
    }
    if(flag==1) cout<<"Yes"<<endl;
    else if(flag==0) cout<<"No"<<endl;
   
    return 0;
}
