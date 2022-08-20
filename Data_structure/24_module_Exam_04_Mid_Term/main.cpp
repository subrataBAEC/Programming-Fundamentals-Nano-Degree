// module 24
// mid exam
#include <bits/stdc++.h>
#include "SUBRATA_STACK.h"


using namespace std;

int main()
{
    Stack<float> st;
    //cout<<st.mid()<<endl;
    st.push(1.2);
    st.push(2.1);
    st.push(3.5);
    cout<<st.mid()<<endl;

    st.push(4.2);
    st.push(5.5);
    cout<<st.mid()<<endl;

    st.pop();
    cout<<st.mid()<<endl;

    st.pop();
    cout<<st.mid()<<endl;

    st.pop();    
    st.pop();   
    st.pop();
    cout<<st.mid()<<endl;

    return 0;
}