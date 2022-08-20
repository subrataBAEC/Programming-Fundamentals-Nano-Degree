/* module 20-practice
Q 1: complete
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;

    cin >> n >> k;
    int arr[n];
    // input
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // sorting
    sort(arr, arr + n);    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    //1 4 13 15 17 20
    // max- from 0 to n;
    // min-from n to 0
    cout<<endl<<arr[k-1]<<" "<<arr[n-k] <<endl;

}
/*
6 3
1 13 20 4 15 17
*/
