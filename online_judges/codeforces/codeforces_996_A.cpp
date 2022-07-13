//codeforces 996/A complete
/* 
*/

#include<bits/stdc++.h> // all in one
using namespace std;

int main(){
    long long int n; // string size
    cin>>n;
    int count=0;
    if(n>=100){ //100
        
        count=count+n/100;
        n=n%100;
        //cout<<"n= "<<n<<" 100-"<<count<<endl;
    } 
    if(n>=20){ //20
       
        count=count+n/20;
        n=n%20;
        //cout<<"n="<<n<<" 20-"<<count<<endl;
    } 
    if(n>=10){ //10
       
        count=count+n/10;
        n=n%10;
        //cout<<"n="<<n<<" 10-"<<count<<endl;
    } 
    
    if(n>=5){ //5
        
        count=count+n/5;
        n=n%5;
        //cout<<"n="<<n<<" 5-"<<count<<endl;
    } 
    if(n>0){
        count=count+n;
        //cout<<"n="<<n<<" 1-"<<count<<endl;
    }
    // if(n>=1){ //1
    //     n=n%1;
    //     count++;
    //     cout<<"n="<<n<<" 1-"<<count<<endl;
    // } 
    cout<<count<<endl;
   
    
    return 0;
}
