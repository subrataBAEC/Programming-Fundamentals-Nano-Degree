/*
module 24
exam mid term
Q 3-in complete
      prefix sum basic
    // int arr[5]={1,2,3,4,-5};

    // int prefixSum[5]={0};
    // prefixSum[0]=arr[0];

    // cout<<prefixSum[0]<<" ";
    // for(int i=1; i<5; i++){
    //     prefixSum[i]=prefixSum[i-1]+arr[i];
    //     cout<<prefixSum[i]<<" ";
    // }

*/

#include <bits/stdc++.h>
using namespace std;

//function for prefix Sum
void prefixSum(int arr[], int days, int prefix[])
{
    prefix[days] = {0};
    prefix[0] = arr[0];
    for (int i = 1; i < days; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
        // cout << prefixEarning[i] << " ";
    }
}
//fuction for array input
void array_input(int arr[], int days)
{
    for (int i = 0; i < days; i++)
    {
        cin >> arr[i];
    }
}
//fuction for array print
void array_print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int test, days, queries;
    cin >> test;
    for (int t = 0; t < test; t++)
    {

        cin >> days;
        int earning[days], expense[days];

        // earning input
        array_input(earning, days);

        // prefix sum of earnings;
        int prefixEarning[days];
        prefixSum(earning, days, prefixEarning);

        // expenses input
        array_input(expense, days);

        // prefix sum of expenses
        int prefixExpense[days];
        prefixSum(expense, days, prefixExpense);
 
        // queries
        cin >> queries;
        int output[queries] = {0};
        for (int i = 0; i < queries; i++)
        {
            int q;
            cin >> q;
            if (prefixEarning[q] < prefixExpense[q]) // upset
            {
                output[i] = 0;
            }
            else // equal or happy
            {
                output[i] = 1;
            }
        }
        array_print(output, queries);
    }

    return 0;
}