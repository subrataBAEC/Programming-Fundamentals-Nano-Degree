/*
subrata saha
Scientific Officer
Bangladesh Atomic Energy Commission
subratabaec@gmail.com
Dhaka, Bangladesh
*/
/*
-- odd sum of a pair is possible when one is odd and another is even.
-- count total odd and even digits
-- if total number of odds == number of evens, that means every pair sum is odd, print yes.
*/

// CodeForces 1542 A - odd set
#include<bits/stdc++.h> // all in one
using namespace std;


void count_pair(){
    int n;
    cin>>n;
    int count_even=0;
    int count_odd=0;

    for(int i=0; i<2*n; i++){
        int digit;
        cin>>digit;
        if((digit%2)==0){
            count_even++;
        }
        else{
            count_odd++;
        }        
    }

    if(count_even==count_odd){
            cout<<"Yes"<<endl;
        }
    else{
            cout<<"No"<<endl;
        }
}


int main(){
    int t,n;
    cin>>t;
    for(int i=0; i<t; i++){
        count_pair();
    }
}