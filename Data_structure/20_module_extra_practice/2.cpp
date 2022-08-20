/* module 20-practice
Q 2: complete
Given an integer N. Write a program to print all prime numbers between 1 and N.

Sample input:
5
Sample output:
2 3 5 
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;    
    // input
    for (int i = 2; i <=num; i++) // 1 is not prime
    {   
        int flag=0;
        for(int j=2; j<=(i/2); j++){
            if(i%j==0){
                flag=1;
            }
        }
        if(flag==0) cout<<i<<" ";
    }   

}
