/*complete
practice 7
7.	Write a C program count total number of ones (1s) and zeros (0s) in given int variable.
*/

#include <stdio.h>

struct fraction{
    int num;
    int denom;
};

//input
struct fraction input(){
    struct fraction x;
    scanf("%d %d",&x.num,&x.denom);
    return x;
}
//print
void print(struct fraction f){
    printf("%d/%d",f.num,f.denom);    
}
//comparison
int equalCheck(struct fraction a,struct fraction b){

    if(a.num==b.num && a.denom==b.denom) return 1;
    else    return 0;
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

    struct fraction a,b;
    //input 
    a=input();
    b=input();

    //print 
    print(a);
    printf(" and ");
    print(b);

    //if negative make positive
    if(a.num<0) a.num=a.num*-1;
    if(a.denom<0) a.denom=a.denom*-1;
    if(b.num<0) b.num=b.num*-1;
    if(b.denom<0) b.denom=b.denom*-1;

    //print after make positive
    printf("\n");
    print(a);
    printf(" and ");
    print(b);
    a=reduce(a);
    b=reduce(b);
    printf("\n");

    //equal check
    int check=equalCheck(a,b);
    if(check==1) printf("\nequal");
    else printf("\nnot");
   


  
}