//E complete
/* 
*/

#include<bits/stdc++.h> // all in one
using namespace std;

int main(){
    int n,x=0;
    cin>>n;
    char s[n];
    for(int i=0; i<n; i++){
        cin>>s[i];        
    }
    int max=0;
    for(int i=0; i<n; i++){
        if(s[i]=='I'){
            x++;
            //cout<<x<<" ";
        } 
        else if(s[i]=='D'){
            x--;
            //cout<<x<<" ";   
        }
        if(x>=max){
            max=x;
           //cout<<max<<endl;  
        }
        else if(x<max){
            max=max;
            //cout<<max<<endl;
        } 
    }
    //cout<<s;
    cout<<max<<endl;
    

    
    return 0;
}
