//H complete
#include<bits/stdc++.h> // all in one 
// #include<iostream>
// #include<iomanip> //for setprecision
using namespace std;

int main(){   
    
    int n,res;
    //input
    cin>>n;
    int p=n/15; // take integer part
    //cout<<p<<endl;//check
    
    //output 
    res=(n*800)-(p*200);
 
    cout<<res<<endl;
    
    return 0;
}