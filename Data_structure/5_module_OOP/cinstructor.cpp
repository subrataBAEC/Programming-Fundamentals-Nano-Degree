//encapsulation
/* 

*/
#include<bits/stdc++.h> // all in one
using namespace std;

class student{
public: // access modifier/specifier
    int p;
    void sayHi(){
        cout<<"Hi "<<p<<endl;
    }
public:
    int x;
private:
    int y;
protected:
    int z;
};

int main(){
    //struct student soumik;
    student soumik;
    soumik.p=10;
    soumik.sayHi();

    soumik.x=20;
    //soumik.y=10;// cant access
    //soumik.z=10;// cant access

  
   
    return 0;
}
