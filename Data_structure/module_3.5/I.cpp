// I
/* 
*/

#include<bits/stdc++.h> // all in one

using namespace std;

int main(){
    char a[30],b[30],c[30];

    cin>>a>>b>>c;

    int len_a=strlen(a);
    int len_b=strlen(b);
    int len_c=strlen(c);
    // cout<<a[len_a-1]<<endl;
    // cout<<b[0]<<endl;
    // cout<<b[len_b-1]<<endl;
    // cout<<c[0]<<endl;

    if( (a[len_a-1] == b[0]) && (b[len_b-1] == c[0]) ==1 ){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;


    return 0;
}
