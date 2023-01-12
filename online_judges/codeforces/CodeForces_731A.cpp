/*
subrata saha
Scientific Officer
Bangladesh Atomic Energy Commission
subratabaec@gmail.com
Dhaka, Bangladesh
*/

// CodeForces 731A Night at the Museum

// clock wise distance=a-character
// anti clock distance= 26-clock wise distance
// take the minimum
#include<bits/stdc++.h> // all in one
using namespace std;

int main(){
    string str;
    cin>>str;
    char start='a'; 

    int distance=0, ans, clk_distace, anti_clk_distance;
    for(int i=0; i<str.size(); i++){
        // cout<<str[i];
        clk_distace=abs(start-str[i]);
        anti_clk_distance=abs(26-clk_distace);
        ans=min(clk_distace,anti_clk_distance);
        distance=ans+distance;
        start=str[i];

    }
    cout<<distance<<endl;
}