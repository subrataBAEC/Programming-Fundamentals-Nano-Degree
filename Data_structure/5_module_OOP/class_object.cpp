//class and object 
/* 

*/
#include<bits/stdc++.h> // all in one
using namespace std;

class student{
public: // access modifier/specifier
    char name[100];
    int roll;
};

int main(){
    //struct student soumik;
    student soumik;
    strcpy(soumik.name, "soumik saha");
    soumik.roll=10;

    cout<<soumik.name<<" "<<soumik.roll<<endl;
   
    return 0;
}
