// palindrome number
#include<stdio.h>
int main() {
    int num,digit,reverse=0;
    printf("enter a number: ");
    scanf("%d",&num); 
    int org_number=num; 

    while(num>0){
        digit=num%10;
        num=num/10;
        //printf("%d %d\n",num,digit);
        reverse=reverse*10+digit;
    }
    printf("reverse %d",reverse);

    if(reverse==org_number){
        printf("\npalindrom %d",org_number);
    }
    else{
        printf("\nnot palindrom %d",org_number);
    }
    return 0;
}
