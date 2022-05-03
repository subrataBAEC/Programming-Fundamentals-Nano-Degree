#include <stdio.h>
 
int main() {
 
    double a,b,avg;
       
    scanf("%lf %lf",&a,&b);
        
    //avg
    avg=((a*3.5) +(b*7.5))/(3.5+7.5);
    //avg=avg/2;

    printf("MEDIA = %0.5lf\n",avg);
 
    return 0;
}