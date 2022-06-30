/*in complete
practice 4
4.	 Remember that we wrote a program to convert Fahrenheit into Celcius.
Now do the same but using fractions. 
Your input and output both should be in fractions.

comment in reduction because of GCD of floating point
*/

#include <stdio.h>

struct fraction{
    float num;
    float denom;
};

//input
struct fraction input(){
    struct fraction x;
    scanf("%f %f",&x.num,&x.denom);
    return x;
}
//print
void print(struct fraction f){
    printf("%f/%f",f.num,f.denom);    
}
//conversion from far to cel
struct fraction convertFartoCel(struct fraction far){
    struct fraction cel;
    cel.num=5*(far.num/far.denom)-160;
    cel.denom=9;    
    return cel;
}

//fraction reduce

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

    struct fraction far,cel;
    //input 
    far=input();
    //cel=fractionInput();

    //print 
    printf("     5*(%f/%f)-160\n",far.num,far.denom);
    printf("---------------\n");
    printf("    9\n");

    //convertion
    cel=convertFartoCel(far);
    printf("%f/%f",cel.num,cel.denom);

    //reduce
    cel=reduce(cel);
    printf("\n%f/%f",cel.num,cel.denom);
}