//  fibannchi series using recursion

#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    // base case
    if(n==0) return 0;
    if(n==1) return 1;

    // genral case
    int num1=fib(n-1);
    int num2=fib(n-2);

    return num1+num2;
}

int main(){
    int n;
    cin>>n;
    int res=fib(n);
    cout<<res;
}