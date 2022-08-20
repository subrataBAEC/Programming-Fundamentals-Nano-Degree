/*complete
Module 12: F
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int color[3];
    int count=0;
    
    for(int i=0; i<3; i++){
        cin>>color[i]; 
    }
    // for(int i=0; i<2; i++){
    //     if(color[i]!=color[i+1]){
    //         count++;
    //     }
    // }

    for(int i=0; i<3; i++){
        for(int j=i+1; j<3; j++){
            if(color[i]==color[j]){
                count++; // similarity fount
            }
        }
    }    
    int res=3-count;
    if(res==0) cout<<1<<endl;
    else cout<<res<<endl;
   
    return 0;
}
