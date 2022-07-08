// B
#include<bits/stdc++.h> // all in one 

using namespace std;

int main(){ 
    char s[100000];

    cin>>s;
    int len=strlen(s);
    for(int i=0; i<len; i=i+2){
        cout<<s[i];
    }
    return 0;
}