/*
reverse stack using recursion
Link: https://www.youtube.com/watch?v=vFP5MfBv8S0&ab_channel=CodeLibrary-byYogesh%26Shailesh
*/

// Stack is in capital S
#include <bits/stdc++.h>
#include "MY_STACK.h"
using namespace std;

Stack<int> st;
void insertAtBottom(char x)
{
    if (st.size() == 0)
    {
        st.push(x);
    }
    else
    {
        char a=st.Top();
        st.pop();
        insertAtBottom(x);
        st.push(a);
    }
}

void reverse()
{
    if (st.size() > 0)
    {
        char x = st.Top();
        st.pop();
        reverse();
        insertAtBottom(x); // this works after all popped
    }
}

int main()
{
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    // cout<<"before reverse"<<endl;
    // while(!st.empty()){
    //     cout<<st.Top()<<" ";
    //     st.pop();
    // }
    cout<<"after reverse"<<endl;

    reverse();
    while(!st.empty()){
        cout<<st.Top()<<" ";
        st.pop();
    }
    cout<<endl<<st.size()<<endl;

}
