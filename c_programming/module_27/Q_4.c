/* complete
Q 4
*/
#include <stdio.h>

struct Fraction{
    int num;
    int denom;
};

struct Fraction Input(){
    struct Fraction f;
    scanf("%d %d",&f.num,&f.denom);
};

struct Fraction fracPrint(struct Fraction a){
    struct Fraction f;
    printf("original: %d/%d\n",f.num,f.denom);
}

struct Fraction revFracPrint(struct Fraction a){
    struct Fraction f;
    printf("reverse: %d/%d\n",f.denom,f.num);
}
int main(){
    struct Fraction a;
    a=Input();
    fracPrint(a);
    //rever print
    revFracPrint(a);




}
