//inheritance
/* 
child class inherit all from parent class,also it can have its own data.
access data from parent class using child class
*/
#include<bits/stdc++.h> // all in one
using namespace std;

//parent class
class Parent{
public: 
    int x;
private:
    int y;
protected:
    int z;
public: // constructor
    Parent(int a,int b,int c){
        x=a;
        y=b;
        z=c;
    }
};
//child class- derived or inherited class
class Child: public Parent{
public:
    int xx;
    //Child(int aa): Parent(11,12,13){
    Child(int aa,int a,int b, int c): Parent(a,b,c){ 
        xx=aa;
    }
    //access protected data from parent
    void tellMe(){
        cout<<"protected data from parent "<<z<<endl;
    }

};

int main(){
    Parent a(10,20,30);
    //Child c(130);
    //cout<<a.x<<" "<<c.x<<endl; //gives different values
    Child c(130, 10, 20 ,30);
    cout<<a.x<<" "<<c.x<<endl;// now same output
    //cout<<a.y -- doesnot work
    c.tellMe();
    return 0;
}
