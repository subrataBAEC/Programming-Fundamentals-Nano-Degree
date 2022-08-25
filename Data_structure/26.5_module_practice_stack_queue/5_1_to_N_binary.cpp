/*
complete
using MY_STACK and MY_QUEUE- complete

Q 5: Given a number N. The task is to generate and print all binary representations of decimal values
from 1 to N.

Expected time complexity: O(N*log2(N))

Sample Input/Sample output
2
1 10

5
1 10 11 100 101
Link: https://www.geeksforgeeks.org/interesting-method-generate-binary-numbers-1-n/
*/

#include <bits/stdc++.h>
#include "MY_STACK.h"
#include "MY_QUEUE.h"

void printNbinary(int n)
{
    Queue<string> q;
    string s1, s2;

    // input first 1
    q.push("1");
    for (int i = 0; i < n; i++)
    {
        s1=q.Front();
        cout<<s1<<endl;
        q.pop();
        s2=s1;
        q.push(s2.append("0"));
        q.push(s1.append("1"));
    }
}

int main()
{
    int n;
    cin >> n;
    printNbinary(n);
}
