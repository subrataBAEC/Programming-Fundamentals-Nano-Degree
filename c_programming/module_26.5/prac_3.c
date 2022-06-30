/*in complete
practice 3
3.	Remember the Fraction structure that we wrote. Using it write functions to
    a.  Add
    b.	Subtract two fractions(problem with negative value)
    c.	Multiply Two fractions
    d.	Divide two fractions(later)

*/

#include <stdio.h>

struct fraction{
    int num;
    int denom;
};

//input
struct fraction fractionInput(){
    struct fraction x;
    scanf("%d %d",&x.num,&x.denom);
    return x;
}
//print
void print(struct fraction f){
    printf("%d/%d",f.num,f.denom);    
}
//ADD
struct fraction fracAdd(struct fraction a,struct fraction b){
    struct fraction add;
    add.num=a.num*b.denom+a.denom*b.num;
    add.denom=b.denom*a.denom;
    return add;
}
//subtract
struct fraction fracSub(struct fraction a,struct fraction b){
    struct fraction sub;
    sub.num=a.num*b.denom-a.denom*b.num;
    sub.denom=b.denom*a.denom;
    return sub;
}
//Multi
struct fraction fracMul(struct fraction a,struct fraction b){
    struct fraction mul;
    mul.num=a.num*b.num;
    mul.denom=a.denom*b.denom;
    return mul;
}

//fraction reduse

int GCD(int a,int b){
    while(b>0){
        int temp=a%b;
        a=b;
        b=temp;
    }
    return a;
}
struct fraction reduce(struct fraction f){
    struct fraction res;
    int gcd=GCD(f.num,f.denom);
    res.num=f.num/gcd;
    res.denom=f.denom/gcd;
    return res;
}


int main(){

    struct fraction a,b,add,sub,mul,div;
    //input a,b
    a=fractionInput();
    b=fractionInput();

    //print and sum
    print(a);
    printf("+");
    print(b);

    //Add
    printf("\nAdd:\n");
    add=fracAdd(a,b);
    printf("%d/%d",add.num,add.denom);
    //fraction reduce
    add=reduce(add);
    printf(" after reduction %d/%d",add.num,add.denom);

    //Sub
    printf("\nSub:\n");
    sub=fracSub(a,b);
    printf("%d/%d",sub.num,sub.denom);
    //fraction reduce
    sub=reduce(sub);
    printf(" after reduction %d/%d",sub.num,sub.denom);

    

    //Mul
    printf("\nMul:\n");
    mul=fracMul(a,b);
    printf("%d/%d",mul.num,mul.denom);
    //fraction reduce
    mul=reduce(mul);
    printf(" after reduction %d/%d",mul.num,mul.denom);






}