//G complete
#include<bits/stdc++.h> // all in one 
// #include<iostream>
// #include<iomanip> //for setprecision
using namespace std;

int main(){   
    
    int a,b,c,d,area1,area2;
    //input
    cin>>a>>b>>c>>d;
    
    //output 
    area1=a*b;
    area2=c*d;

    if((area1>area2)){        
        cout<<area1<<endl;
    }
    else if((area2>area1)){        
        cout<<area2<<endl;
    }
    else{        
        cout<<area1<<endl;//if equal
    }
    return 0;
}