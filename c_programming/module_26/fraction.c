/*
fraction using structure Introdunction
display a fraction
*/
#include<stdio.h>
#include<stdlib.h>

struct Fraction{
    int num;//numerator
    int denom;
};

void print(struct Fraction half){
    printf("%d/%d",half.num,half.denom);
}
// driver code
int main(){

    struct Fraction half={2,2};
    print(half);

    return 0;
}
