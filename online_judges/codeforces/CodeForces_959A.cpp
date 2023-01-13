/*
subrata saha
Scientific Officer
Bangladesh Atomic Energy Commission
subratabaec@gmail.com
Dhaka, Bangladesh
Date: 13 January, 2023
*/
/*
ehab takes first(even or odd)
- mahmud turn (even)
- ehab turn (odd)
e-> n=1(win) || n=2 || n=3 , a=1, n=1-1=0(win) || n=4 || n=5, a=1, n=0 (win)
m-> a=nill || a=2, n=n-a=2-2=0(win) || a=2, n=3-2=1 || a=4, n=0 (win) || a=4, n=5-4=1

so, when odd -> ehab wins
so when even -> mahmud wins
*/

// CodeForces 959/A - Mahmoud and Ehab and the even-odd game
#include<bits/stdc++.h> // all in one
using namespace std;

int main(){
    long long int n;
    cin>>n;
    if(n%2==0){
        cout<<"Mahmoud"<<endl;
    }
    else{
        cout<<"Ehab"<<endl;
    }
}