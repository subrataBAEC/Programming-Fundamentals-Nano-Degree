// 3. Write a C program to check whether a given 
// non-negative number is a multiple of 3 or 7,
//  but not both.  For example: inputs 7, 3, 6, 14 
//  should output yes. Inputting 21, 42 should output no.
#include<stdio.h>
int main() {	
	int num;
	
	scanf("%d",&num);
	
	if(num%3==0 && num%7==0) {
		printf("no");
	}
	else {
		printf("yes");
	}
	return 0;
}