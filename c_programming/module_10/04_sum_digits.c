// sum of digits

#include<stdio.h>
int main() {
    int num,digits,sum=0;
    printf("enter a number: ");
    scanf("%d",&num);      
    
    while(num>0){
        digits=num%10;
        num=num/10;
        sum=sum+digits;
    }
    printf("%d",sum);
    return 0;
}
