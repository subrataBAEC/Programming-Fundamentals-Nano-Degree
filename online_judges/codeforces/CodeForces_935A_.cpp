// CodeForces 935A - Fafa and his Company

#include<bits/stdc++.h> // all in one
using namespace std;

int main(){
    int total, employ_per_group,count=0;
    cin>>total;

    for(int leader=1; leader<=(total/2); leader++){
        employ_per_group=total-leader;
        if((employ_per_group%leader)==0){
            count++;
        }
    }
    cout<<count<<endl;
}