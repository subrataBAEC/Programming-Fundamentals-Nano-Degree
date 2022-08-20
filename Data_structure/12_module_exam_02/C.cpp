/*complete
Module 12: C

*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        int array[n];

        //input
        for(int j=0; j<n; j++){
            cin>>array[j];
        }
        //array sorting
        sort(array,array+n);

        // for(int j=0; j<n; j++){
        //     cout<<array[j]<<" ";
        // }
        //last index of first element
        int index;
        for(int j=0; j<n; j++){
            if(array[j]!=array[j+1]){
                    //cout<<endl<<j<<" ";
                    index=j;
                    break;
                }
        }
        //(size-index)+1
        cout<<n-(index+1) <<endl;
    
        
    }//end of t
    //cout<<endl;
   
    return 0;
}
