/*
complete.
5. find the outputs
*/
#include<stdio.h>
#include<string.h>

// driver code
int main(){
    //Find the output of the following code.
    int a = 10;
    int b = 20;
    int *p = &a;

    printf("%d %d %d\n", a, b, *p);

    *p = 30; //same as a=30

    printf("%d %d %d\n", a, b, *p);

    *p = 20;
    a = 50;
    b = 10;

    printf("%d %d %d\n", a, b, *p);

    p = &b;
    printf("%d %d %d\n", a, b, *p);

    a = 20;
    b = 100;

    printf("%d %d %d\n", a, b, *p);
    return 0;
}

