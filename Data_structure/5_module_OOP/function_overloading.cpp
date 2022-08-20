//polymorphism ,function overloading
/* 
same function name with different outputs depending on parameters
*/
#include<bits/stdc++.h> // all in one
using namespace std;

class Example{
public: 
    int add(int x,int y){
        cout<<"first"<<endl;
        return x+y;
    }
    double add(double x,double y){
        cout<<"second "<<endl;
        return x+y;
    }
    void add(char a){
        cout<<"char "<<a<<endl;
    }
};

int main(){
    Example p;
    // goes outputs depending on parameters
    cout<<p.add(1,2)<<endl; // integer
    cout<<p.add(1.2,2.7)<<endl; // floating
    p.add('z'); // char

    return 0;
}
