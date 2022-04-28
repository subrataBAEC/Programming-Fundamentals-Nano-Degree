// 5.	Write a C program that will first read an integer n, 
// then read n integers. From those, it will find the sum of even 
// integers.
// Example:
// Enter n: 5
// Input 5 integers: 2 3 5 6 7
// Sum of even integers = 8

#include<stdio.h>
int main() {	
	int sum=0,n;	
	scanf("%d",&n); // n is array size and loop limit too
    int num[n]; // user selects array size
    for(int i=1; i<=n; i++ ){
        scanf("%d",&num[i]);
        //printf("\n%d",num[i]);
        if(num[i]%2==0){
            sum=sum+num[i];
        }
    }
    printf("\nsum %d",sum);
	return 0;
}