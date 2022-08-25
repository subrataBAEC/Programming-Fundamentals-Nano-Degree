/*
practice module 26.5
problem 1- comoplete
Write a program to check for balanced brackets in an expression.. Balanced brackets are the pairs and the orders of “{“, “}”, “(“, “)”, “[“, “]” are correct in the given expression.

For example: [()]{}{[()()]()} is a balanced bracket.
              [({}]) is not a balanced bracket

You will be given a string, you need to check if the brackets are balanced or not. If they are balanced, print “YES”, otherwise print “NO”.
link: https://www.youtube.com/watch?v=BmZnJehDzyU&ab_channel=CodeHelp-byBabbar

*/

// Stack in capital S
#include <bits/stdc++.h>
#include "MY_STACK.h"// using my own stack
using namespace std;

bool isValidParenthesis(string sr)
{
    Stack<char> st;
    for (int i = 0; i < sr.length(); i++)
    {
        char ch = sr[i];
        // if opening bracket-->push
        if (ch == '(' || ch == '{' || ch == '[')
        {
            st.push(ch);
        }
        // if closing--> Stack Top check and pop
        else
        {
            // if stack empty
            if (st.empty())
            {
                return false;
            }
            // not empty-->match with top
            else if (!st.empty())
            {
                char top = st.Top();
                // if(input == top)
                if ((ch == ')' && top == '(') || (ch == '}' && top == '{') || (ch == ']' && top == '['))
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
        }
    }
    // if any remaining element-->return false
    if (!st.empty())
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    string sr;
    cin>>sr;
    if(isValidParenthesis(sr)){
        cout<<"valid"<<endl;
    }
    else if(!isValidParenthesis(sr)) {
        cout<<"Non- valid"<<endl;
    }
}
