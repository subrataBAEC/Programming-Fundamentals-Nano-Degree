//C complete
#include<bits/stdc++.h> // all in one 
// #include<iostream>
// #include<iomanip> //for setprecision
using namespace std;

int main(){
    
    char op;
    long long int a,b,res=0;
    //input
    cin>>a>>op>>b;

    //output
    if(op=='+'){
        res=a+b;
        cout<<res<<endl;
    }
    else{
        res=a-b;
        cout<<res<<endl;
    }
    return 0;
}