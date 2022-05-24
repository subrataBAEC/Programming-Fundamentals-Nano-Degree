/*
complete.
1.Write a function that takes as input a number and outputs its square.
*/
#include<stdio.h>
#include<string.h>

// function
int getSquare(int num){
    num=num*num;
    return num;
}

// driver code
int main(){
    int num;
    printf("enetr a number to get its square:");
    scanf("%d",&num);
    int sq=getSquare(num);
    printf("the square is:%d",sq);
    return 0;
}

