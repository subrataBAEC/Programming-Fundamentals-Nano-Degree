//access private data using getter,setter
/* 
use getter, setter to access private
*/
// #include<bits/stdc++.h> // all in one
// using namespace std;

// class Example{
// private: 
//     int x;
    
// public: // should be public
//     // to set data
//     void setter(int a){
//         x=a;
//     }
//     // to get data
//     int getter(){
//         return x;
//     }
// };

// int main(){
//     Example a;
//     a.setter(100);
//     cout<<a.getter();

//     //cout<<a.x<<" "<<a.y<<" "<<a.z<<endl;
   
//     return 0;
// }

// using password to access private date
#include<bits/stdc++.h> // all in one
using namespace std;

class Example{
private: 
    int x;
    int password;
    
public: // should be public
    Example(int p){
        password=p;
    }
    // to set data
    void setter(int a,int p){
        if(password==p){
            x=a;
        }
        else{
            cout<<"passwprd wrong"<<endl;
        }
    }
    // to get data
    int getter(int p){
        if(password==p){
            return x;
        }
        else{
            cout<<"passwprd wrong"<<endl;
            return -1;
        }
    }
};

int main(){
    Example a(1234);
    a.setter(130,1234);
    cout<<a.getter(1234);
    
    //cout<<a.x<<" "<<a.y<<" "<<a.z<<endl;
   
    return 0;
}

