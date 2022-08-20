/*in complete
Module 12: B

*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    cout<<endl;    
    for(int k=0; k<t; k++){
        int n,q;
        cin>>n>>q;
        int array[n];
        int a[q],b[q];
        int min;
        //input
        for(int i=1; i<=n; i++){
            cin>>array[i];
        }
        //cout<<n<<" "<<q<<endl;
        cout<<"Case "<<k+1<<":"<<"\n";
        for(int c=1; c<=q; c++){
            //cout<<i<<endl;

            cin>>a[c]>>b[c];        
        
            for(int i=1; i<=q; i++){           
                min=array[a[c]];
                //cout<<min<<" ";
                for(int j=a[i]; j<=b[i]; j++){
                    //cout<<array[j]<<" ";                 
                    if(array[j]<min){
                        min=array[j];
                    }
                }

            }
            cout<<min<<endl;
        }
        //<<endl;        
    }//end of t
    cout<<endl;
   
    return 0;
}
