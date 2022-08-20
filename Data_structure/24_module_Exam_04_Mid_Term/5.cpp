/*
module 24
exam mid term
Q 5-complete
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    cin >> m;
    int arr[m][m];

    // input
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;
    int mid = (m / 2);
    // cout<<mid<<endl;

    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == 0 && j < (mid + 1)) // LU
            {
                sum = sum + arr[i][j];
                // cout<<arr[i][j]<<" ";
            }
            if (i <= mid && j == (m - 1)) // RU
            {
                sum = sum + arr[i][j];
                // cout<< arr[i][j] << " ";
            }
            if (i >= mid && j == 0) // LD
            {
                sum = sum + arr[i][j];
                // cout << arr[i][j] << " ";
            }

            if (i == (m - 1) && j >= mid) // RD
            {
                sum = sum + arr[i][j];
                // cout << arr[i][j] << " ";
            }

            if (j == mid) // vertical
            {
                sum = sum + arr[i][j];
                // cout << arr[i][j] << " ";
            }

            if (i == mid) // horizontal
            {
                sum = sum + arr[i][j];
                // cout << arr[i][j] << " ";
            }
        }
    }
    int d=arr[0][mid]+ arr[m-1][mid]+ arr[mid][0]+ arr[mid][m-1]+ arr[mid][mid];
    sum = sum - d;
    cout << sum << endl;

    return 0;
}