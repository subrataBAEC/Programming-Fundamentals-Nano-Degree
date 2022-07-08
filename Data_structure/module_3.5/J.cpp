// J
/* 
*/

#include<bits/stdc++.h> // all in one

using namespace std;

int main(){
    char a[100],b[100]; // O and E

    cin>>a>>b;

    int len_a=strlen(a);
    int len_b=strlen(b);
    //int len=len_a+len_b;
    
    // cout<<len_a<<endl;
    // cout<<len_b<<endl;
    // cout<<len<<endl;

    if(len_a-len_b==0){ //equal length
        for(int i=0; i<len_a; i++){
            cout<<a[i]<<b[i];
        }
    }
    else if(len_a-len_b==1){ // length diff=1
        for(int i=0; i<len_a-1; i++){
            cout<<a[i]<<b[i];
        }
        cout<<a[len_a-1];
    }


    return 0;
}
