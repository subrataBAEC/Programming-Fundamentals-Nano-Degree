//string modifiers in C++
/* 
assign(),concat, append(), push_back(), pop_back()
erase(), insert(), swap()
*/
#include<bits/stdc++.h> // all in one
using namespace std;

int main(){
    string st,st1,st2,st3; // class object
    //string assign-2 ways
    st="subrata saha";
    st.assign("abc");    
    cout<<"assign: "<<st<<endl; 

    //concat,append()
    st2="programming";
    st+=st2;
    cout<<"aconcat: "<<st<<endl;   
    st3="xyz";
    st2.append(st3);
    cout<<"append: "<<st2<<endl; 

    //push back(), pop back()
    st2.push_back('1');//add at end
    cout<<"push back: "<<st2<<endl;
    st2.pop_back(); //delete last char
    cout<<"pop back: "<<st2<<endl; 

    //erase(), insert()-insert string in middle
    st="abcdef";
    st.erase(2,3);//pos,how many? from c to f
    cout<<"erase: "<<st<<endl; 

    st.insert(1,"1234");//pos, added string
    cout<<"insert: "<<st<<endl; 

    //swap()
    st1="abcd";
    st2="123";
    swap(st1,st2);
     cout<<"swap: "<<st1<< " "<<st2<<endl; 


    return 0;
}
