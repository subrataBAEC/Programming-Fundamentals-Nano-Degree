//F complete
#include<bits/stdc++.h> // all in one 
// #include<iostream>
// #include<iomanip> //for setprecision
using namespace std;

int main(){   
    
    int a,b,c;
    //input
    cin>>a>>b>>c;

    //output 
    if(a+b==c || b+c==a || a+c==b){
        
        cout<<"Yes"<<endl;
    }
    else{
        
        cout<<"No"<<endl;
    }
    return 0;
}