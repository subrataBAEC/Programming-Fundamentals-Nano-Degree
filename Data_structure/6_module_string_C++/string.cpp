//string in C++
/* 

*/
#include<bits/stdc++.h> // all in one
using namespace std;


int main(){
    string st,st2;
    st2="subrata saha dgzgdfghlkjdlfkjzlkzjxvljxcl";
    //find string capacity-default 15
    cout<<st.capacity()<<endl;
    cout<<st2.capacity()<<endl;
    cout<<st<<endl;
    //max capacity
    cout<<st.max_size()<<endl;
    //10 same char string
    string st3(10,'z');
    cout<<st3<<endl;
    //string copy,concat--no strcpy(),concat
    st2=st3;
    cout<<"new st2 "<<st2<<endl;
    //string n=st2+st3;
    st2=st2+st3;
    cout<<st2<<endl;
    //comparison--no strcmp()
    st2="saha";
    st3="saha";
    if(st2==st3) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;  
    return 0;
}
