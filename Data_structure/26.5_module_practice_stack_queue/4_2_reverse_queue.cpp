/*
in complete
reverse a queue -using stack

using MY_STACK and MY_QUEUE- incomplete
*/

#include <bits/stdc++.h>
#include "MY_STACK.h"
#include "MY_QUEUE.h"
// //#include "MYQUEUE.h"
using namespace std;

Queue<int> q;
Stack<int> st;

void print()
{
    while (!q.empty())
    {
        cout << q.Front() << " ";
        q.pop();
    }
}

void reverseQueue()
{
    // step 1: transfer from queue to stack
    while (!q.empty())
    {
        int x;
        x = q.Front();
        st.push(x);
        q.pop();
    }
    // step 2: transfer back from stack to queue
    while (!st.empty())
    {
        int a;
        a = st.Top();
        q.push(a);
        st.pop();
    }
}

int main()
{
    // q.push(1);
    // q.push(2);
    // q.push(3);
    // q.push(4);
    // q.push(5);
    // print();

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout << endl
         << q.size() << endl;
    // q.pop();
    // cout<<q.size()<<endl;
    cout << q.Front() << endl;
    cout << q.Back() << endl;
    cout << q.pop() << endl;

    cout << "reverse" << endl;
    reverseQueue();
    print();
}