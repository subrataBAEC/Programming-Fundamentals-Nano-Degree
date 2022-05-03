#include <stdio.h>
#include <math.h>

 
int main() {
 
    int time,speed;
    double spent_fuel;
       
    scanf("%d %d",&time,&speed);
    spent_fuel=(time*speed)/12.0;
    printf("%0.3lf\n",spent_fuel);
     
    return 0;
}