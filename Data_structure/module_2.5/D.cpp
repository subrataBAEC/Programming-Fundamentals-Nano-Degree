//D complete
#include<bits/stdc++.h> // all in one 
// #include<iostream>
// #include<iomanip> //for setprecision
using namespace std;

int main(){   
    
    int n,sum=0;
    //input
    cin>>n;

    //output
    for(int i=1; i<=n; i++){
        sum=sum+i;
    }
    cout<<sum;
    return 0;
}