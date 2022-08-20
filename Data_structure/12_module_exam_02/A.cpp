/*complete
Module 12: A
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int p[4];
    int count=0;
    for(int i=0; i<4; i++){
        cin>>p[i];
        if(p[i]>=10) count++;
    }
    cout<<count<<endl;    
    return 0;
}
