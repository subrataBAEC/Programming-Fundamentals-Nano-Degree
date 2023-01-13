/*
subrata saha
Scientific Officer
Bangladesh Atomic Energy Commission
subratabaec@gmail.com
Dhaka, Bangladesh
Date: 13 January, 2023
*/
/*
for n=6
2,4,8,16,32,64
divide into 2 piles(each having 3)
pile 1= max+lowest 2
pile 2= rest 3 items

for n=8 (each 4)
pile 1= max+lowest 3
*/

// CodeForces 1348/A - Phoenix and Balance
#include<bits/stdc++.h> // all in one
using namespace std;

int split_piles(int n){

    int pile1=0;
    int pile2=0;

    for(int j=1; j<n; j++){
        // for n=8, pile 1= max+lowest 3
        if(j<(n/2)){                    
            pile1=pile1+pow(2,j);
            // cout<<"1-"<<pile1<<endl;
        }
        else{
            pile2=pile2+pow(2,j);
            // cout<<"2-"<<pile2<<endl;
        }

    }
    // take the max in pile
    pile1=pile1+pow(2,n);
    // cout<<pile1<<" "<<pile2<<endl;
    int diff=abs(pile1-pile2);
    return diff;
}


int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        int res= split_piles(n);
        cout<<res<<endl;
    }
}