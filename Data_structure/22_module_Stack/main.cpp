#include <bits/stdc++.h>
#include "MYSTACK.h"

using namespace std;

int main()
{
    Stack st;
    st.push(1);
    st.push(2);
    st.push(4);
    cout<<st.empty()<<endl;
    cout<<st.size()<<endl;
    cout<<st.Top()<<endl;
    while (!st.empty())
    {
        cout << st.pop() <<" ";
    }

    cout<<endl<<st.pop()<<endl;

    return 0;
}