/*
fraction add using structure
reduce after add

function for input,print,add,reduce(extra GCD)

*/
#include<stdio.h>
#include<stdlib.h>

//structure
struct Fraction{
    int num;//numerator
    int denom;
};
//function for input
struct Fraction inputFraction(){
    struct Fraction f;
    scanf("%d %d",&f.num,&f.denom);
    return f;
};
//function for print
void print(struct Fraction f){
    printf("%d/%d",f.num,f.denom);
}

//function for addition
struct Fraction add(struct Fraction a,struct Fraction b){
    struct Fraction ans;//for storing O/P
    ans.num=a.num*b.denom + b.num*a.denom;
    ans.denom=a.denom*b.denom;
    return ans;
}

//function for GCD

int GCD(int a, int b){
    while(b>0){
        int temp=a%b;
        a=b;
        b=temp;
    }
    return a;
}

//function for reduce fraction
struct Fraction reduce(struct Fraction f){
    int gcd=GCD(f.num, f.denom);
    f.num=f.num/gcd;
    f.denom=f.denom/gcd;
    return f;
};


// driver code
int main(){

    struct Fraction a,b,sum;// a>num,denom; b>num,denom
    a=inputFraction();
    b=inputFraction();

//    a=reduce(a);
//    b=reduce(b);

    print(a);
    printf(" + ");
    print(b);
    printf(" = ");
    sum=add(a,b);
    sum=reduce(sum);
    print(sum);

    return 0;
}
