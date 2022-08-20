/*complete
Module 12: B

*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    //cout<<endl;    
    for(int k=0; k<t; k++){
        int n,q;
        cin>>n>>q;
        int array[n];
        int a[q],b[q];
        //input
        for(int i=1; i<=n; i++){
            cin>>array[i];
        }
        //cout<<n<<" "<<q<<endl;
        for(int i=1; i<=q; i++){
            //cout<<i<<endl;
            cin>>a[i]>>b[i];
        }
        cout<<"Case "<<k+1<<":"<<"\n";
        for(int i=1; i<=q; i++){           
            int min=array[a[i]];
            //cout<<min<<" ";
            for(int j=a[i]; j<=b[i]; j++){
                //cout<<array[j]<<" ";                 
                if(array[j]<min){
                    min=array[j];
                }
            }
            cout<<min<<'\n';
        }
        //cout<<endl;        
    }//end of t
    //cout<<endl;
   
    return 0;
}
