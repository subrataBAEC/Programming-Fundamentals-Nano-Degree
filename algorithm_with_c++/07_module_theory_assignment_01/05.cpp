/*
Course: Algorithm with C++
Theory Assignment 01
question no. 05 (complete)
    convert int to binary using recursion.
*/

#include<bits/stdc++.h>
using namespace std;
/*
// method 1: iterative method

string int_to_binary(int decimal){
    string binary="";
    while(decimal>0){
        if(decimal%2==0){
            binary='0'+binary;
        }
        else{
            binary="1"+binary;
        }
        decimal=decimal/2;
    }
    return binary;
}
*/

/*
// method 2: Recursive method
string int_to_binary(int decimal){

    if(decimal==0){
        return "0";
    }
    if(decimal==1){
        return "1";
    }
    return int_to_binary(decimal/2) + int_to_binary(decimal%2);
}
*/

// method 3: Recursive method
void int_to_binary(int decimal){

    // base case
    if(decimal==0){
        return;
    }
    else{
        int_to_binary(decimal/2);
        cout<<(decimal%2);
    }
}

int main(){
    int decimal;
    cin>>decimal;

    int_to_binary(decimal);
    // string res= int_to_binary(decimal);
    // cout<<res;
}