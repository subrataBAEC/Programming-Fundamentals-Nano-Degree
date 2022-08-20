//string element access in C++
/* 
at(),front(),end()
*/
#include<bits/stdc++.h> // all in one
using namespace std;

int main(){
    string st; // class object
    st="subrata saha";
    
    cout<<"st[]: "<<st[2]<<endl;
    cout<<"at(): "<<st.at(2)<<endl;
    
    //front means first element, st[0]
    //back means last element, st[st.size()-1]
    cout<<"front(): "<<st.front()<<endl;
    cout<<"back(): "<<st.back()<<endl;   
    return 0;
}
