/*
using MY_STACK and MY_QUEUE- complete

You are given an array A of size N. You need to first push the elements of the array into a
stack and then print the current minimum present in the stack at each pop until the stack
becomes empty.

5
1 2 3 4 5
1 1 1 1 1

7
1 6 43 1 2 0 5
0 0 1 1 1 1 1
*/

#include <bits/stdc++.h>
#include "MY_STACK.h"
#include "MY_QUEUE.h"

int main()
{
    int n;
    cin >> n;
    int array[n];
    // input
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    // push to two stacks: st and min stack
    Stack<int> st;
    Stack<int> minStack;

    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        // if arr[i] is smaller or equal, push to min stack
        if (array[i] <= min)
        {
            minStack.push(array[i]);
            min = array[i];
        }
        // every element is pushed to st
        st.push(array[i]);
    }
    // output- popped from st and minstack
    while (!st.empty())
    {
        if (st.Top() != minStack.Top())
        {
            cout << minStack.Top() << " ";
            st.pop();
        }
        else
        {
            cout << minStack.Top() << " ";
            st.pop();
            minStack.pop();
        }
    }

    return 0;
}
