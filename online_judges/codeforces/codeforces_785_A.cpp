//codeforces 785/A complete
/* 
*/

#include<bits/stdc++.h> // all in one
using namespace std;

int main(){
    int n; 
    cin>>n;
    int count=0;

    string s;

    for(int i=0; i<n; i++){
        cin>>s;        
        if(s[0]=='T') count=count+4;
        if(s[0]=='C') count=count+6;
        if(s[0]=='O') count=count+8;
        if(s[0]=='D') count=count+12;
        if(s[0]=='I') count=count+20;
        //cout<<count<<endl;
    }
    cout<<count<<endl;
    // for(int i=0; i<n; i++){
    //     cin>>s[i];
        
    //     if(s[i]=="Tetrahedron") count=count+4;
    //     if(s[i]=="Cube") count=count+6;
    //     if(s[i]=="Octahedron") count=count+8;
    //     if(s[i]=="Dodecahedron") count=count+12;
    //     if(s[i]=="Icosahedron") count=count+20;
    //     cout<<count<<endl;
    // }
    //cout<<count<<endl;
    
   
    
    return 0;
}
