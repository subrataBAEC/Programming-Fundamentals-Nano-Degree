/*
module 24
exam mid term
Q 2-complete

WAP that will take n integers into an array A and m positive integers into array B.
Now find the difference (set operation) of array A and B or (A-B).

logic: compare every element of a to every element of b, if matches break loob
b, it loop b reaches end, that means no similar is found. print from seta.


*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;

    // input set a
    cin >> m;
    int set_a[m];
    for (int i = 0; i < m; i++)
    {
        cin >> set_a[i];
    }

    // input set b
    cin >> n;
    int set_b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> set_b[i];
    }
    //calculation set difference
    int i, j = 0;

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (set_a[i] == set_b[j])
            {
                //cout << seta[i] << " " << setb[j] << endl;
                break;
            }
            //cout << seta[i] << " " << setb[j] << endl;
        }
        if (j == n)      cout << set_a[i] << " ";
    }
    return 0;
}
