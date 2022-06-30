/* question 02
Consider the function -
int f(int n, int a[]) {
     int cnt = 0;
     for (int i=0; i<n; i++) {
         if (a[i] == a[0]) cnt++;
    }
    return cnt;
}
Explain what it does in one sentence. What is the return value 
when n = 5 and a = {1, 2,1, 2, 1}?
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//function
int f(int n, int a[]) {
     int cnt = 0;
     for (int i=0; i<n; i++) {
         if (a[i] == a[0]) cnt++;
    }
    return cnt;
}

// driver code
int main(){
    //int a[n];
    int n=5;
    int a[5]={1, 2, 1, 2, 1};
    int res=f(5,a);
    printf("%d",res);
    
   return 0;
}

