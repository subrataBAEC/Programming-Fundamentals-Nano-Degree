//codeforces 344/A complete
/* 
*/

#include<bits/stdc++.h> // all in one
using namespace std;

int main(){
    int n; 
    cin>>n;
    int pole[n];

    for(int i=0; i<n; i++){
        cin>>pole[i];
    }

    int count=0;

    for(int i=0; i<(n-1); i++){//not n, it will take garbaze value in i+1
        if(pole[i]!=pole[i+1]){
            count++;
        }       
    }
    //count++;

    cout<<count+1<<endl;
    return 0;
}
