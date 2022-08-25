/*
using MY_STACK and MY_QUEUE- complete

1. reverse every K elements of a queue -using stack
11 3
1 2 3 4 5 6 7 8 9 10 11
3 2 1 6 5 4 9 8 7 11 10

2. reverse first K elements of a queue -using stack
7 4
1 2 3 4 5 6 7
4 3 2 1 5 6 7
*/

#include <bits/stdc++.h>
#include "MY_STACK.h"
#include "MY_QUEUE.h"

void reverseEveryKelements(int n, int k, Queue<int> &q) // dont forget &
{
    int x = n / k; // 10/3=3
    int y = n % k; // 10%3=1

    Stack<int> st;
    // using while loop
    //  while(x>0)
    //  {
    //      int chk=k;
    //      while(chk>0)
    //      {
    //          st.push(q.pop());
    //          chk--;
    //      }
    //      while (!st.empty())
    //      {
    //          q.push(st.pop());
    //      }
    //      x--;
    //  }
    //   while(y>0)
    //  {
    //      st.push(q.pop());
    //      y--;
    //  }
    //  while (!st.empty())
    //  {
    //      q.push(st.pop());
    //  }

    // using for loop
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < k; j++)
        {
            st.push(q.pop());
        }
        while (!st.empty())
        {
            q.push(st.pop());
        }
    }

    for (int i = 0; i < y; i++)
    {
        st.push(q.pop());
    }
    while (!st.empty())
    {
        q.push(st.pop());
    }
    // while (!st.empty())
    // {
    //     cout<<q.pop()<<" ";
    // }
}
void reverseFirstKelements(int n, int k, Queue<int> &q)
{
    Stack<int> st;

    // using for loop
    // reverse first K elements

    for (int i = 0; i < k; i++)
    {
        st.push(q.pop());
    }
    while (!st.empty())
    {
        q.push(st.pop());
    }

    int rest = n - k; // 10-3=8

    for (int i = 0; i < rest; i++)
    {
        q.push(q.pop());
    }
}
    int main()
    {
        int n, k;
        cin >> n >> k;
        Queue<int> q;
        // queue input
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            q.push(val);
        }
        reverseEveryKelements(n, k, q);
        //reverseFirstKelements(n, k, q);
        while (!q.empty())
        {
            cout << q.pop() << " ";
            // q.pop();
        }
        return 0;
    }
