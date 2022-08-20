/*in complete
Module 12: D
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        int box[n];
        int freq[n];
        //input
        for(int j=0; j<n; j++){
            cin>>box[j];
            freq[j]=-1;
        }
        //frq. array
        int count=0;        
        for(int j=0; j<n; j++){
            count=1;
            for(int k=j+1; k<n; k++){
                if(box[j]==box[k]){
                    count++;
                    freq[k]=0;
                }
            }
            if(freq[j]!=0) freq[j]=count;         
        }
        //frq array before sorting
        // for(int j=0; j<n; j++){
        //     cout<<freq[j]<<" ";
        // }
        // cout<<endl;

        //print freq array
        //frq array before sorting
        sort(freq,freq+n);
        // for(int j=0; j<n; j++){
        //     cout<<freq[j]<<" ";
        // }
        //cout<<endl;
        int max=freq[n-1];
        //cout<<max<<endl;
        cout<<n-max<<endl;
        
    }//end of t
    //cout<<endl;
   
    return 0;
}
