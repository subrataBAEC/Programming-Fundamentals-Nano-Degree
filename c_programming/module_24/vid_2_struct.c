/*
structer initialization,declaration,modify
*/

#include<stdio.h>
struct Date{
    int day; //elements
    int month;
    int year;
};
int main(){
    // //assign values
    // struct Date today;// type variable
    // //indidually
    // today.day=28;
    // today.month=5;
    // today.year=2022;

    //assign values
    struct Date today={28,5,2022};
    printf("%d-%d-%d\n",today.day,today.month,today.year);
    
    //modify a single element value
    today.year=today.year+5;
    printf("%d-%d-%d\n",today.day,today.month,today.year);
    
    //modify all elements
    today=(struct Date){1,1,2023};
    printf("%d-%d-%d",today.day,today.month,today.year);


    
}