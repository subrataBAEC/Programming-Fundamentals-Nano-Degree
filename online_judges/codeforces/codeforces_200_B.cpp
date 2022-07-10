//codeforces 200/B 
//complete
/* 
*/

#include<bits/stdc++.h> // all in one
using namespace std;

int main(){
    int n; 
    cin>>n;
    int dr[n];

    for(int i=0; i<n; i++){
        cin>>dr[i];
    }
    
    long double res=0;
    for(int i=0; i<n; i++){
        res=res+((double)dr[i]/100);
        //cout<<res<<" ";
    }
    res=(res/n)*100;
    cout<<setprecision(7)<<res<<endl;
    
    return 0;
}
