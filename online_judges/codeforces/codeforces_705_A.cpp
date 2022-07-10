//codeforces 705/A  
//complete
/* 
*/
#include<bits/stdc++.h> // all in one
using namespace std;

int main(){
    int n; 
    cin>>n;
    
    for(int i=1; i<n; i++){
        if((i%2)!=0) cout<<"I hate that ";
        if((i%2)==0) cout<<"I love that ";
    }
    //for last sentence
    if((n%2)==0) cout<<"I love it"<<endl;
    if((n%2)!=0) cout<<"I hate it"<<endl;   
    
    return 0;
}
