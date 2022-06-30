/* complete
Q 10
help: https://www.geeksforgeeks.org/bit-tricks-competitive-programming/
*/
#include<stdio.h>
#include<string.h>

int main(){

    //11010011 : 220
    //11010000: 208

    int p=220,k=4; //last kth bits
    int mask = ~((1 << k ) - 1);
    p=p & mask;
    printf("%d",p);    
    return 0;
}


