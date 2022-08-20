//string size in C++
/* 
size, length, resize, clear, empty
*/
#include<bits/stdc++.h> // all in one
using namespace std;

int main(){
    string st, st2, st3; // class object
    st="subrata saha";
    //size(), length()
    cout<<st<<" "<<st.size()<<endl;
    cout<<st<<" "<<st.length()<<endl;
    // resize()
    st.resize(4);
    cout<<st<<" "<<st.size()<<endl;

    //clear()
    st.clear();
    cout<<st<<" "<<st.size()<<endl;
    //is string empty?
    if(st.empty()) cout<<"empty "<<st.size()<<endl;
    else cout<<"not empty"<<st.size()<<endl;
    st="qwer";
    if(st.empty()) cout<<"empty "<<st.size()<<endl;
    else cout<<"not empty "<<st.size()<<endl;

    
    return 0;
}
