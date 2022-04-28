// 4.	Write a C program that reads an integer between 1 and 12 
// and print the month of the year in English.  Use switch case.

#include<stdio.h>
int main() {	
	int n;
	
	scanf("%d",&n);
    // n=(int)n; // if enters float
    // printf("%d\n",n);
	
	switch(n) {
        case 1:
        printf("january");
        break;

        case 2:
        printf("february");
        break;

        case 3:
        printf("march");
        break;

        case 4:
        printf("april");
        break;
        /// rest is omitted

        default:
        printf("error");
        
    }
	return 0;
}