//constructor,getter,setter
/* 

*/
#include<bits/stdc++.h> // all in one
using namespace std;

class Example{
public: // access modifier/specifier
    int x,y,z;
    Example(int a,int b,int c){
        x=a;
        y=b;
        z=c;
    }
};

int main(){
    Example a(10,20,30);
    cout<<a.x<<" "<<a.y<<" "<<a.z<<endl;
   
    return 0;
}
