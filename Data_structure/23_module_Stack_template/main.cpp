/*
module 23-2
stack for int, float, double, char
string, pair, structure, object
*/

#include <bits/stdc++.h>
#include "MYSTACK.h"

using namespace std;

int main()
{
    Stack<pair<int, char>> st;

    st.push(make_pair(1, 'a'));
    st.push(make_pair(2, 'b'));
    st.push(make_pair(3, 'c'));

    while (!st.empty())
    {
        pair<int, char> chk;
        chk = st.pop();
        cout << chk.first << "|" << chk.second << endl;
    }

    cout << st.size() << endl;
    if (!st.empty())
    {
        {
            pair<int, char> chk;
            chk = st.Top();
            cout << chk.first << "|" << chk.second << endl;
        }
    }
    // cout<<endl<<st.pop()<<endl;

    return 0;
}