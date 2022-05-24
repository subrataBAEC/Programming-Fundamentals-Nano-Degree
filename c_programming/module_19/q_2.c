/*
complete.
2.How do you declare a function that takes as input an integer 
and a double and returns a char?
*/
#include<stdio.h>
#include<string.h>

// function
char getChar(int a,double b){
    char c='a'; 
    return c;
}

// driver code
int main(){
    int a;
    double b;
    printf("enetr two numbers to get a character:");
    scanf("%d %lf",&a,&b);

    char c=getChar(a,b);
    printf("%c",c);
    return 0;
}

