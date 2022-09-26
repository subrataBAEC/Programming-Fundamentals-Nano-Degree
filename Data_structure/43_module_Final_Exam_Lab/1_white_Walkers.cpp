/*
Lab Final exam
- complete

No: 1
Name: white walkers and candies
*/


#include <bits/stdc++.h>
using namespace std;


int main(){
    int t,n,c;
    cin>>t;   

    int candy_per_person;

    for(int i=0; i<t; i++){
        cin>>n>>c; //people,candy
        int flag=1;
        int a[n];
        for(int j=0; j<n; j++){
            cin>>a[j];
            candy_per_person=a[j]*2;
            if(candy_per_person>c){
                flag=0;
            }
            c=c-a[j]*2;
        }
        if(flag==1) cout<<"Yes"<<endl;
        if(flag==0) cout<<"No"<<endl;
    }
}