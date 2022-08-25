/*
module 25, vid 25-4,25-5
--> infix to prefix and 
--> prefix  calculation using stack

Note:
// pop null message is muted
// Stack in capital S
*/

#include <bits/stdc++.h>
#include "SUBRATA_STACK.h"
//#include "MY_STACK.h"
using namespace std;

int precisionCalc(char c)
{
    if (c == '^')
    {
        return 3;
    }
    else if (c == '/' || c == '*')
    {
        return 2;
    }
    else if (c == '+' || c == '-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

// infix to prefix calculation
string infixToPrefix(string str)
{
    // reverse input string
    reverse(str.begin(), str.end());

    // input is in string but data is pushed in as char,so stack is int type
    Stack<char> st;
    string result;
    for (int i = 0; i < str.length(); i++)
    {
        // char is between 0-9
        if (str[i] >= '0' && str[i] <= '9')
        {
            result += str[i];
        }
        // if ')'-> push
        else if (str[i] == ')')
        {
            st.push(str[i]);
        }
        // if '('->pop until ')' is found and then ')' is also popped
        else if (str[i] == '(')
        {
            while (!st.empty() && st.Top() != ')')
            {
                result += st.pop();
            }
            if (!st.empty())
            {
                st.pop();
            }
        }
        else
        {
            //pop untill str[i] precision is less than or equal to top char.
            while (!st.empty() && precisionCalc(st.Top()) >= precisionCalc(str[i]))
            {
                result += st.pop();
            }
            st.push(str[i]);
        }
    }
    while(!st.empty()){
        result+=st.pop();
    }
    reverse(result.begin(),result.end());
    return result;
}

// prefix
// input is in string
// but data is pushed in as int,so stack is int type
int prefixEvaluation(string chk)
{
    Stack<int> st;

    int length = chk.length();
    for (int i = length - 1; i >= 0; i--) // travers from last to first
    {
        // if chk[i] is 0 to 9 then only PUSH
        if (chk[i] >= '0' && chk[i] <= '9')
        {
            st.push(chk[i] - '0'); // char to int
        }

        // if chk[i] is operator -pop a,b and calculate and then push
        else
        {
            int a, b;
            a = st.pop();
            b = st.pop();
            switch (chk[i])
            {
            case '+':
                st.push(a + b);
                break;

            case '-':
                st.push(a - b);
                break;

            case '*':
                st.push(a * b);
                break;

            case '/':
                st.push(a / b);
                break;

            case '^':
                st.push(pow(a, b));
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
    // int x, y;
    // string sr = "+*423";
    // x = prefixEvaluation(sr);
    // cout << x << endl;

    // string s2 = "-+7*45+20";
    // y = prefixEvaluation(s2);
    // cout << y << endl;

    //infix to prefix and prefix evaluation
    string infix="(7+(4*5))-(2+0)";
    string prefix;
    cout<<infix<<endl;
    prefix=infixToPrefix(infix);
    cout<<prefix<<endl;
    cout<<prefixEvaluation(prefix)<<endl;
}