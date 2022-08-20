//Iterator in C++
/* 
scope decleration
string print using iterator
reverse print string
no scope--useing auto
*/
#include<bits/stdc++.h> // all in one
using namespace std;

int main(){
    string st, st2, st3; // class object
    st="subrata saha";
    string:: iterator it;//iterator of string scope
    /* iterator points to begining and end
    */
    for(it=st.begin(); it!=st.end(); it++){
        cout<<*it<<" ";//dereferencing-pointer
    }
    cout<<endl;
    //shorter way
    for(string:: iterator it=st.begin(); it!=st.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    //in reverse-- reverse iterator
    st2="subrata saha";
    string:: reverse_iterator r_it;
    for(r_it=st2.rbegin(); r_it!=st2.rend(); r_it++){
        cout<<*r_it<<" ";
    }
     cout<<endl;
    // automatic--no scope required
    st3="abcdef";
    for(auto r_it=st3.rbegin(); r_it!=st3.rend(); r_it++){
        cout<<*r_it<<" ";  }


    return 0;
}
