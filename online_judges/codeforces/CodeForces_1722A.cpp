/*
subrata saha
Scientific Officer
Bangladesh Atomic Energy Commission
subratabaec@gmail.com
Dhaka, Bangladesh
Date: 13 January, 2023
*/
/*

*/

// CodeForces 1722/A - Spell Check
#include<bits/stdc++.h> // all in one
using namespace std;

int main(){
    string s1="Timur";
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n, flag=0, count=0;
        cin>>n;
        string s2;
        cin>>s2;
        // sort string 1 and 2 and compare
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        // cout<<s1<<endl<<s2;

        if(s1==s2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }        
    }
}
/*
1
5
miurT
*/