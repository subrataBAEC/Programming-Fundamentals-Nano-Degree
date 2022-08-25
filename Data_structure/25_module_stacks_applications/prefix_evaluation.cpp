/*
prefix calculation using stack
Note:
// pop null message is muted
// Stack in capital S
*/

#include <bits/stdc++.h>
#include "SUBRATA_STACK.h"
//#include "MY_STACK.h"

using namespace std;

// prefix
// input is in string
// but data is pushed in as int,so stack is int type
int prefixEvaluation(string chk)
{
    Stack<int> st;

    int length = chk.length();
    for (int i = length - 1; i >=0 ; i--) //travers from last to first
    {
        // if chk[i] is 0 to 9 then only PUSH
        if (chk[i] >= '0' && chk[i] <= '9')
        {
            st.push(chk[i] - '0'); // char to int
        }

        // if chk[i] is operator -pop a,b and calculate and then push
        else
        {
            int a,b;
            a=st.pop();
            b=st.pop();
            switch(chk[i])
            {
                case '+':
                st.push(a+b);
                break;

                case '-':
                st.push(a-b);
                break;

                case '*':
                st.push(a*b);
                break;

                case '/':
                st.push(a/b);
                break;

                case '^':
                st.push(pow(a,b));
                break;

                default:
                break;
            }
        }
    }
    return st.Top();
}

int main()
{
    int x,y;
    string sr="+*423";
    x=prefixEvaluation(sr); 
    cout<<x<<endl;

    string s2="-+7*45+20";
    y=prefixEvaluation(s2); 
    cout<<y<<endl;
}