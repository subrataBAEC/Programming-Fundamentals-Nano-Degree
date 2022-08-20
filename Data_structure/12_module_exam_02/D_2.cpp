/*in complete
Module 12: D
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int res[t];
    for(int k=0; k<t; k++){
        int n;
        cin>>n;
        int box[n];
        for(int j=0; j<n; j++){
            cin>>box[j];
        }
        int count=0;
        for(int i=0; i<n; i++){
            if(box[0]!=box[i]){
                count++;
            }           
        
        }
        res[k]=count;            
        
    }//end of t
    for
    //cout<<endl;
   
    return 0;
}
