/*
Write a function to find the area of a
rectangle given its length and width.

*/
#include<stdio.h>
#include<string.h>

//prototype
    double area_rectangle(double l,double w);

// driver code
int main(){
   double l,w,area;
   scanf("%lf %lf",&l,&w);
   area= area_rectangle(l,w);
   printf("%lf",area);
   return 0;
}
// function
    double area_rectangle(double l,double w){
        double area=0.5*l*w;
        return area;
    }
