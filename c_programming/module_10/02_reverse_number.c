// reverse a number
// using for and while loop
#include<stdio.h>
int main() {
    int num,digit,reverse=0;
    printf("enter a number: ");
    scanf("%d",&num);  

    while(num>0){
        digit=num%10;
        num=num/10;
        //printf("%d %d\n",num,digit);
        reverse=reverse*10+digit;
    }
    
    // for(int i=1; num>0; i++){
    //     digit=num%10;
    //     num=num/10;
    //     //printf("%d %d\n",num,digit);
    //     reverse=reverse*10+digit;
    // }
    printf("%d",reverse);
    return 0;
}
