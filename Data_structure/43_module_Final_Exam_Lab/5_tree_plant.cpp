/*
Lab Final exam
- complete

No: 5
Name: Tree Plant

*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int y;
    cin >> y;

    if(y==1) cout<<1<<endl;
    else {
    int a=y-1;
    int b=y-2;
    long long ans = pow(2, a) * pow(2, b);

    cout << ans << endl;
    }
}