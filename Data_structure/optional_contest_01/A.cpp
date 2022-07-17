//A complete
/* 
*/

#include<bits/stdc++.h> // all in one
using namespace std;

int main(){
    unsigned long long int ar[3],temp;
    for(int i=0; i<3; i++){
        cin>>ar[i];
    } 
    //sorting
    //int min=ar[0],temp;
    for(int i=0; i<3; i++){
        for(int j=i+1; j<3; j++){
            if(ar[i]>ar[j]) {
            temp=ar[i];
            ar[i]=ar[j];
            ar[j]=temp;
            
        }

        }
        
    }
    // for(int i=0; i<3; i++){
    //     cout<<ar[i];
    // } 
    if((ar[2]-ar[1])>ar[0]) cout<<-1;
    else cout<<ar[2]<<endl;



    return 0;
}
