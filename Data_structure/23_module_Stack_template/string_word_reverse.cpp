/*
module 23-4 complete
reverse a string words

input: i am subrata
output: subrata am i
*/

#include <bits/stdc++.h>
#include "MYSTACK.h"
using namespace std;

void reverseString(string str)
{
    Stack<string> st; // stack
    for (int i = 0; i < str.length(); i++)
    {
        string word = ""; // initialize like sum=0
        // cout<<str[i]<<" ";
        while (i < str.length() && str[i] != ' ')
        {
            word = word + str[i];
            i++;
        }
        cout << word << " ";
        st.push(word);
    }
    cout << endl;

    // pop from stack
    while (!st.empty())
    {
        cout << st.Top() << " ";
        st.pop();
    }
    cout << endl;
}

int main()
{
    string str = "i am subrata";
    // cout << str << endl;
    reverseString(str);
    return 0;
}