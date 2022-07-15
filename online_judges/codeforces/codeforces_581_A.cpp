//codeforces 581/A complete
/* 
*/

#include<bits/stdc++.h> // all in one
using namespace std;

int main(){
    int a,b; 
    cin>>a>>b;
   
    int count_diff=0,count_same=0,red,blue;
    
    for(int i=1; ; i++){
       if(a>0 && b>0){
        a=a-1;
        b=b-1;
        count_diff++;
       }
       if(a==0){
        count_same=b/2;
        break;
       }
       if(b==0){
        count_same=a/2;
        break;
       }
    }
    cout<<count_diff<<" "<<count_same<<endl;
    
    return 0;
}
