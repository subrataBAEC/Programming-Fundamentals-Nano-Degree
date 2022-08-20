/*complete
Module 12:H
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int len=s.size();
    int in_A;
    //count from first
    for(int i=0; i<len; i++){
        if(s[i]=='A'){
            in_A=i;//first A- index
            break;
        }
    }
    //cout<<in_A;
    int in_Z;
    //count from last
    for(int i=len; i>0; i--){
        if(s[i]=='Z'){
            in_Z=i;//last Z- index
            break;
        }
    }
    //cout<<in_Z;
    int res=in_Z-in_A;
    cout<<res+1<<endl;
    return 0;
}
