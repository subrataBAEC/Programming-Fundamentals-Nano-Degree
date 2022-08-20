/*
module 24
exam mid term
Q 1-complete
WAP that will take n integers into an array. Now find out the number of occurrences
for each of the unique numbers. Each line of the output will be a unique number that exists in the
array and its frequency. You can print them in any order.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    // input
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // sorting
    sort(arr, arr + n);

    // counted array
    int counted[n] = {0};

    for (int i = 0; i < n; i++)
    {
        // if already counted
        if (counted[i] == 1)
        {
            continue;
        }

        // if not yet counted
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                counted[j] = 1;
                count++;
            }
        }
        // output
        cout << arr[i] << "=>" << count << endl;
    }
}