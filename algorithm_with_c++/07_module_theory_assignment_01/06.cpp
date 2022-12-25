/*
Course: Algorithm with C++
Theory Assignment 01
question no. 06 (complete)
    GCD of two numbers using recursion.
*/

#include<bits/stdc++.h>
using namespace std;

/*
// method 1: iterative method
int gcd(int a, int b){ //a>b

    while(b!=0){
        int rem=a%b;
        a=b;
        b=rem;
    }
    return a;
}
*/

// method 2: Recursive method
int gcd(int a, int b){ //a>b

    if(b==0){
        return a;
    }

    int rem=a%b;
    a=b;
    b=rem;
    gcd(a,b);
}

int main(){
    int a,b,res;
    cin>>a>>b;
    if(a>b){
        res=gcd(a,b);
    }
    else{
        res=gcd(b,a);
    }
    cout<<res;
}