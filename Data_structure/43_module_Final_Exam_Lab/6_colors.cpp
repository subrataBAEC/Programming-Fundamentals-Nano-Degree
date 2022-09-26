/*
Lab Final exam
- complete

No: 6
Name: magic_colors
*/
#include <bits/stdc++.h>
using namespace std;

stack<char> st;
stack<char> st2;

// input
void leftColor(char ch)
{
    int a, b;
    if (st.empty()) // first color
    {
        st.push(ch);
    }
    else if (!st.empty())
    {
        a = st.top();
        b = ch;
        // R B
        if ((a == 'R' && b == 'B') || (a == 'B' && b == 'R'))
        {
            st.pop();
            st.push('P');
            // print();
        }
        // R G
        else if ((a == 'R' && b == 'G') || (a == 'G' && b == 'R'))
        {
            st.pop();
            st.push('Y');
            // print();
        }

        // B G
        else if ((a == 'B' && b == 'G') || (a == 'G' && b == 'B'))
        {
            st.pop();
            st.push('C');
            // print();
        }
        else if (a == ch)
        {
            st.pop();
            // print();
        }
        else if (a != ch)
        {
            st.push(ch);
            // print();
        }
    }
}
// reverse
void reverse()
{
    while (!st.empty())
    {
        if (st2.empty())
        {
            st2.push(st.top());
            st.pop();
        }
        else if (!st2.empty())
        {

            if (st.top() != st2.top())
            {
                st2.push(st.top());
                st.pop();
            }
            else{
                st.pop();
                st2.pop();
            }
        }
    }
}

// output
void print()
{
    while (!st.empty())
    {
        cout << st.top();
        st.pop();
    }
    cout << endl;
}
// rev output
void print_rev()
{
    while (!st2.empty())
    {
        cout << st2.top();
        st2.pop();
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            char colors;
            cin >> colors;
            leftColor(colors);
        }
        // cout << endl;
        reverse();
        print_rev();
        //print();
    }
}
/*
1
3
RBG

*/