//codeforces 510/A complete
/* 
*/

#include<bits/stdc++.h> // all in one
using namespace std;

int main(){
    int m,n; 
    cin>>m>>n;
    
    for(int i=1; i<=m; i++){
        if(i%2!=0){
            for(int j=1; j<=n; j++){
                cout<<"#";
            }                
        }
        else if(i%4==0){
            cout<<"#";
            for(int j=2; j<=n; j++){
                cout<<".";
            }               
        }
        else if(i%2==0){            
            for(int j=2; j<=n; j++){
                cout<<".";
            }
            cout<<"#";  
        }                          
        cout<<endl;
    }  
    
    return 0;
}
