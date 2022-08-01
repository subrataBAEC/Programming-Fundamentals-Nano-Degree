/*
Module 10: vid 3
Linear search
*/

#include <bits/stdc++.h>
using namespace std;


int main(){
    cout<<"enter array size and elements"<<endl;
    int n;
    cin>>n;
    int array[n];
    //array input
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
    cout<<"want to search?(Y/N) ";
    char c;
    cin>>c;

    while(toupper(c)=='Y'){
        //searching
        cout<<"which value you want to seach ";
        int value;
        cin>>value;
        int flag=0;
        for(int i=0; i<n; i++){
            if(value==array[i]){
                cout<<"index: "<<i<<" pos: "<<i+1<<" value: "<<array[i]<<endl;
                flag=1;
            }
        }
        if(flag==0){
            cout<<"not found"<<endl;
        }
        cout<<"want to search again? ";
        cin>>c;      
            
    }
    return 0;
}
