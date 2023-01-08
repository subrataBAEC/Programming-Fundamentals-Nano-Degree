/*
----------------------
Name:  subrata saha
email: subratabaec@gmail.com
Date: Jan 7, 2023
-----------------------
//max game//

Option 1: Add value V to a list.
Option 2: Print the maximum value from the list and remove it.

Input Format

- First line will contain Q.
- Then you will get Q lines. For each line at first you will get the option OP as 1 or 2.
- If option is 1, then another integer value V will be given.
    Constraints

1 <= Q <= 10^5
-1000 <= V <= 1000
Output Format

Output the maximum value when the option is 2.

Sample Input:
3
1 5
1 3
2
Sample Output:
5

*/


#include<bits/stdc++.h>
#include <queue>
using namespace std;

int main(){
    priority_queue<int>pq;

    int n,a,val;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>a;
        if(a==1){
            cin>>val;
            pq.push(val);
        }
        if(a==2){
            int res=pq.top();
            pq.pop();
            cout<<res<<endl;
        }
    }
}