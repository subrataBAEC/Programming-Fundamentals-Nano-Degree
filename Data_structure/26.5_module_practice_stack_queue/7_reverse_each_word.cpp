/*
complete
using MY_STACK and MY_QUEUE- complete

Q 7.Given a String. Reverse each word in it where the words are separated by dots.
Reverse individual words.

Expected Time Complexity: O(N).

Sample Input/Sample output

i.like.this.program.very.much
i.ekil.siht.margorp.yrev.hcum

pqr.mno
rqp.onm

Link:https://www.geeksforgeeks.org/reverse-individual-words/

*/

#include <bits/stdc++.h>
#include "MY_STACK.h"
#include "MY_QUEUE.h"

Stack<char> st;
Queue<string> q;

void printWordReverse(string str)
{

    for (int i = 0; i < str.length(); i++)
    {
        if (i < str.length() && str[i] != '.')
        {
            st.push(str[i]);
            //cout<<str[i]<<" ";
        }
        else
        {
            while (!st.empty())
            {
                cout << st.Top();
                st.pop();
                //cout<<'-';
            }
            cout << '.';
        }
        
    }
    //cout<<"size: "<<st.size()<<endl;
    //for last word
    while(!st.empty()){
        cout<<st.Top();
        st.pop();
    }
    cout<<endl<<"size: "<<st.size()<<endl;

    cout << endl;
}

int main()
{
    string sr1 = "pqr.mnory.";
    string sr2="i.like.this.program.very.much.";
    // cin >> sr
    printWordReverse(sr2);
    cout<<endl;
    printWordReverse(sr1);


}
