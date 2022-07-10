//codeforces 677/A complete
/* 
*/
#include<bits/stdc++.h> // all in one
using namespace std;

int main(){
    int n;
    cin>>n;
    int people[n],capacity[n];

    for(int i=0; i<n; i++){
        cin>>people[i]>>capacity[i];
    }

    int count=0;

    for(int i=0; i<n; i++){

        if((capacity[i]-people[i])>=2){
            count++;
        }
    }

    cout<<count<<endl;
    return 0;
}
