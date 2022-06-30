//pointer
//

#include<stdio.h>
#include<string.h>

int main() {
    double var=2.0;
    printf("%p %lld\n",&var,&var);

    double *pvar=&var;
    printf("%p %lld\n",pvar,pvar);//pvar>>addrees of var
    printf("%lf\n",*pvar);//value of var
    

    /*
    arihmatic:
    1. increment address by 8 bytes for double, 4 for int
    2. for 10 increment, 8*10=80 bytes increment
    */
    pvar++; //8 steps
    printf("%p %lld\n",pvar,pvar);//pvar>>addrees of var
    pvar=pvar+10; //80 steps
    printf("%p %lld\n",pvar,pvar);//pvar>>addrees of var



    return 0;
}
