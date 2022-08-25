
/*
complete
2.	Given N integers, the task is to insert those elements in the queue. Also, given M integers,
your task is to find the frequency of each number of M in the Queue.

Expected time complexity: O(N)

Sample Input/Sample output
8
1 2 3 4 5 2 3 1
5
1 3 2 9 10
2 2 2 -1 -1 
*/

#include <bits/stdc++.h>
#include "MY_STACK.h"
#include "MY_QUEUE.h"
using namespace std;

Queue<int> q;
Stack<int> st;

void findFrequency(Queue<int> q, int n, int val)
{
    int count = 0;
    // cout<<val<<endl;

    for (int i = 0; i < n; i++)
    {
        int x = q.Front();
        if (val == x)
        {
            count++;
        }
        q.pop();
        q.push(x); // this is important, otherwise stack is empty after first iteration
    }
    if (count == 0)//item not present
    {
        count = -1;
        cout << count << " ";
    }
    else
    {
        cout << count << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    int val;
    // queue input
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        q.push(val);
    }

    // while (!q.empty())
    // {
    //     cout << q.Front() << " ";
    //     q.pop();
    // }

    // integers input
    int m;
    cin >> m;
    int array[m] = {0};
    for (int i = 0; i < m; i++)
    {
        cin >> array[i];
    }
    //operation
    for (int i = 0; i < m; i++)
    {
        findFrequency(q, n, array[i]);
    }
}