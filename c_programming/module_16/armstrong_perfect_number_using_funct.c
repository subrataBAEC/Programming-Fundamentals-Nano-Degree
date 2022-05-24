// souce: https://www.w3resource.com/c-programming-exercises/function/c-function-exercise-9.php
//
/*

*/
#include<stdio.h>
#include<string.h>

//prototype
    //void swap(int *p,int *q);

// driver code
int main(){
   int num;
   scanf("%d",&num);
   //armstrong number
   int res=check_armstrong(num);
   if(res==num) printf("armstrong number\n");
   else printf("not armstrong number\n");
   //perfect number
    int res2=check_perfect(num);
    if(res2==num) printf("perfect number\n");
    else printf("not perfect number\n");
   return 0;
}
// function for armstrong number
    int check_armstrong(int num){
    int digit,cube,sum1=0;
    while(num!=0){
       digit=num%10;
       sum1=sum1+digit*digit*digit;
       num=num/10;
    }
    return sum1;
}
// function for perfect number
    int check_perfect(int num){
        int sum2=0;
    for(int i=1; i<num; i++){
            if((num%i)==0){
                    sum2=sum2+i;
            }

    }
    return sum2;

}

