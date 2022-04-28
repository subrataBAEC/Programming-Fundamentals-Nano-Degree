// factorial of an integer

#include<stdio.h>
int main() {
    int num,fact=1;
    printf("enter a number: ");
    scanf("%d",&num);      
    
    for(int i=1; i<=num; i++){
        fact=i*fact;
    // 1*1,2*1,3*2,4*6,*5*24...
    }
    printf("factorial %d",fact);
    return 0;
}
