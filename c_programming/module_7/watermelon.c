// Problem Statement
// In the vacation of Ramadan,Alex decided to arrange an Ifter party. He has to buy two watermelons for making juice
// The store sells three kinds of watermelons for the price of aa, bb and cc taka , respectively. Find the minimum total price of two different watermelons.

/// Sample 1
// Inputcopy	Outputcopy
// 700 600 780
// 1300


// Sample 2
// Inputcopy	Outputcopy
// 10000 10000 10000
// 20000
// Buying any two watermelons costs 20000 taka.


#include<stdio.h>

int main() {	
    
    int a,b,c,sum=0;;
    scanf("%d %d %d",&a,&b,&c);
    int sum1=a+b;
    int sum2=b+c;
    int sum3=a+c;
    //printf("%d",sum1);

    if(sum1<sum2 && sum1<sum3) {
        printf("%d\n",sum1);
    }
    else if(sum2< sum1 && sum2<sum3) {
        printf("%d\n",sum2);
    }
    else if(sum3<sum1 && sum3<sum2) {
        printf("%d\n",sum3);
    }
    else if(sum1==sum2 && sum1==sum3){
        printf("%d\n",sum1);
    }
    return 0;
}