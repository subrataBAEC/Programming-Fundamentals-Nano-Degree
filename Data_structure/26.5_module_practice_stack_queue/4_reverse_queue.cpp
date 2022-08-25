/*
complete
reverse a queue -using stack

using STL for queue and stack

*/

#include <bits/stdc++.h>
// #include "MY_STACK.h"
// #include "MY_QUEUE.h"
// //#include "MYQUEUE.h"
using namespace std;

queue<int> q;
stack<int> st;

void print()
{
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
}

void reverseQueue()
{
    // step 1: transfer from queue to stack
    while (!q.empty())
    {
        int x;
        x = q.front();
        st.push(x);
        q.pop();
    }
    // step 2: transfer back from stack to queue
    while (!st.empty())
    {
        int a;
        a = st.top();
        q.push(a);
        st.pop();
    }
}

int main()
{
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    print();

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout << endl
         << q.size() << endl;
    // q.pop();
    // cout<<q.size()<<endl;
    cout << q.front() << endl;
    cout << q.back() << endl;
    cout << "reverse" << endl;
    reverseQueue();
    print();
}