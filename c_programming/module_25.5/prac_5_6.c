/*
prac 5 and 6
complete
*/
#include<stdio.h>
#include<string.h>
#include<stdbool.h>


struct Point{
    double x_cor;
    double y_cor;
};

int main(){
    struct Point a={ -10, 20 };
    struct Point b={ 20, 30 };

    double mid_x=(a.x_cor+b.x_cor)/2;
    double mid_y=(a.y_cor+b.y_cor)/2;

    printf("%lf , %lf",mid_x,mid_y);

}