//codeforces 266/A complete
/* 
*/

#include<bits/stdc++.h> // all in one
using namespace std;

int main(){
    int n; // string size
    cin>>n;
    char s[100];
    for(int i=0; i<n; i++){
        cin>>s[i]; 
    }
    int count=0;
       
    for(int i=0; i<n; i++){
        if(s[i]==s[i+1]) count++;
    }
    cout<<count<<endl;
    // else cout<<"Aoki"<<endl;   

    
    return 0;
}
