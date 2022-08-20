/*
module 24
exam mid term
Q 4-complete
WAP that will take (m x n) positive integer inputs into a matrix of dimension m x n.
Now replace all the duplicate integers by -1 in that matrix. Finally display it.

Sample input
3  3
1  7  3
7  4  5
3  5  6

 1  7  3
-1  4  5
-1 -1  6
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int arr[m][n];
    // input and max value
    int max = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    //cout << max<<endl;
    
    //count array
    int count[max + 1] = {0};

    //replace and output
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (count[arr[i][j]] == 0)
            {
                cout << arr[i][j] << " ";
                count[arr[i][j]]++;
            }
            else
            {
                cout << -1<<" ";
            }
        }
        cout << endl;
    }

    return 0;
}