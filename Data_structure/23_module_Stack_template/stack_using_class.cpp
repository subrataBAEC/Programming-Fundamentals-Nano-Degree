/*
module 23-3
stack using class object
*/

#include <bits/stdc++.h>
#include "MYSTACK.h"
using namespace std;
int globalID=100;

class person{
    string name;
    int id;
    float salary;
public:
    //constructor-initiall setting to null
    person(){//set as null
        name="";
        id=-1;
        salary=-1;
    }
    //setter functions for name, salary
    void setName(string name){
        this->name=name;
    }
    void setSalary(float salary){
        this->salary=salary;
    }

    //constructor
    person(string name, float salary){
        setName(name);
        setSalary(salary);
        id=globalID;
        globalID++;
    }
    //getter functions for name, id ,salaey
    string getName(){
        return name;
    }
    int getID(){
        return id;
    }
    float getSalary(){
        return salary;
    }
    //print function
    void print(){
        cout<<name<<" | "<<id<<" | "<<salary<<endl;
    }

};

int main()
{
    Stack <person> st;
    person a ("subrata saha", 550.06);
    person b ("subrata das", 5350.06);
    person c ("subrata roy", 1550.06);

    st.push(a);
    st.push(b);
    st.push(c);

    while(!st.empty()){
        person printObj;
        printObj = st.pop();
        printObj.print();
    }
    return 0;
}