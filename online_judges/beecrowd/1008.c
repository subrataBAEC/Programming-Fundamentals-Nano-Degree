#include <stdio.h>
 
int main() {
 
    int num,w_hours;
    float per_hour,salary;
       
    scanf("%d %d %f",&num,&w_hours,&per_hour);
    salary=per_hour*w_hours;

    printf("NUMBER = %d\n",num);
    printf("SALARY = U$ %0.2f\n",salary);
 
    return 0;
}