//H complete
/* 

*/

#include<bits/stdc++.h> // all in one
using namespace std;

int main(){
    string str;
    cin>>str;
    int chr_arr[26]={0},x;    

    for(int i=0; i<str.length(); i++){
        //cout<<str[i]<<" ";
        //char frequency
        x=str[i]-'a';
        chr_arr[x]++;
    }
    int flag=0;
    for(int i=0; i<26; i++){
        //cout<<chr_arr[i]<<" ";
        if(chr_arr[i]%2!=0){
            flag=1;
            break;
        }
    }
    if(flag==0) cout<<"Yes"<<endl;
    else if(flag==1) cout<<"No"<<endl;     
    
    return 0;
}
