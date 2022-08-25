/*
practice module 26.5
problem 3- comoplete
Q: Write a program to sort a stack of integers(ascending order)
5
1 8 5 4 2
1 2 4 5 8

link: https://www.youtube.com/watch?v=XNAv8NrAwng&ab_channel=CodeLibrary-byYogesh%26Shailesh
*/
// Stack in capital S

#include <bits/stdc++.h>
#include "MY_STACK.h"
using namespace std;

Stack<int> st;

        
void insert_correct_pos(int x){
    if(st.size()==0 || st.Top()>x){ //st.top<x  -->> for descending
        st.push(x);
    }
    else{
        int a=st.Top();
        st.pop();
        insert_correct_pos(x);
        st.push(a);
    }
}


void reverse(){
    if(st.size()>0){
        int x=st.Top();
        st.pop();
        reverse();
        insert_correct_pos(x);
    }

}


void sortStack(){
    reverse();
}



int main()
{
    st.push(1);
    st.push(8);
    st.push(5);
    st.push(4);
    st.push(2);

    sortStack();

    cout<<"after sorting(ascending):"<<endl;
    while(!st.empty()){
        cout<<st.Top()<<" ";
        st.pop();
    }


    
}
