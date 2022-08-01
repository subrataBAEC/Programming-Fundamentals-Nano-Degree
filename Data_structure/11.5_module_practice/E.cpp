/*complete
Module 11.5:E
*/

#include <bits/stdc++.h>
using namespace std;
//maxmium value of array
int maxValue(int a[], int n){
    int max=a[0];
    for(int i=0; i<n; i++){
        if(a[i]>max){
        max=a[i];
        }
    }
    return max;
}

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        int a[n]={0};
        int b[n]={0};
        //input A,B
        for(int k=0; k<n; k++){
            cin>>a[k];
        }
        for(int k=0; k<n; k++){
            cin>>b[k];
        }

        for(int k=0; k<n; k++){
            a[k]=(20*a[k])-(10*b[k]);
        }
        //check
        // for(int k=0; k<n; k++){
        //     cout<<a[k]<<" ";
        // }
        // cout<<endl;

        //get maxmimum value from a[]
        int max=maxValue(a,n);
       //output
        if(max<=0) cout<<0<<endl;
        else cout<<max<<endl;
    }     
    
    return 0;
}
