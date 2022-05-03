#include <stdio.h>
#include <math.h>

 
int main() {
 
    int marks,rest;
    
    scanf("%d",&marks);
    if(0<=marks && marks<40){
        //printf("Newbie\n");
        rest=40-marks;
        printf("%d\n",rest);
    }
    else if(40<=marks && marks<70){
        //printf("Pupil\n");
        rest=70-marks;
        printf("%d\n",rest);
    }
    else if(70<=marks && marks<90){
        //printf("Specialist\n");
        rest=90-marks;
        printf("%d\n",rest);
    }
    else if(90<=marks && marks<=100){
        printf("expert\n");
    }


    return 0;
}