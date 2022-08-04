/*
Module 15.5 ; practice problem-2D array;
complete
Q1. WAP that will take n integers into a sqrt(n) by sqrt(n) array (2D) and show them as traditional matrix view.
Sample input:
9
9 8 7 6 5 4 3 2 1
9 8 7
6 5 4
3 2 1

9
1 1 1 2 2 2 3 3 3
1 1 1
2 2 2
3 3 3
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int array[n];
    for (int i = 0; i < n; i++){
        cin>>array[i];
    }
    //n=sqrt(n);
    int count=0;
    for (int i = 0; i < n; i++){
        cout<<array[i]<<" ";
        count++;
        if(count==sqrt(n)){
            cout<<endl;
            count=0;
        }
    }
    
    return 0;
}