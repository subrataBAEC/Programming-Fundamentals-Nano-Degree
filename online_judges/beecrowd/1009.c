#include <stdio.h>
 
int main() {
 
    char name[30];
    double salary,sales,total;
    scanf("%s",name);       
    scanf("%lf %lf",&salary,&sales);
    total=salary+(sales*0.15);
    printf("TOTAL = R$ %0.2f\n",total);

 
    return 0;
}