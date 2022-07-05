//E complete
#include<bits/stdc++.h> // all in one 
// #include<iostream>
// #include<iomanip> //for setprecision
using namespace std;

int main(){   
    
    int n,k,x,y,total=0;//total nights, staying, first slot fee, second slot fee
    //input
    cin>>n;
    cin>>k;
    cin>>x;
    cin>>y;

    if(n>=k){
        total=k*x+(n-k)*y;
    }
    else{
        total=n*x;
    }  
    //output 
    cout<<total<<endl;
    return 0;
}