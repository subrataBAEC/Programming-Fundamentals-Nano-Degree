/*
structer example
input a date and print next  date
*/

#include<stdio.h>
struct Date{
    int day; //elements
    int month;
    int year;
};

int daysInMonths[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int main(){
    //variable declare,input
    struct Date start;//starting date
    scanf("%d %d %d",&start.day,&start.month,&start.year);   
    //assign all elements to a new variable
    struct Date nextDate=start;
    /* if day is not the last day of a month increment
     otw go to nex month
    daysInmonth[5-1]=30, day=30 then go to next month*/ 
    if(nextDate.day!=daysInMonths[nextDate.month-1]){
        nextDate.day++;
    }
    else if(nextDate.month !=12){
        nextDate.day=1;
        nextDate.month++;
    }
    else{
        nextDate.day=1;
        nextDate.month=1;
        nextDate.year++;
    } 
    printf("start: %d-%d-%d\n",start.day,start.month,start.year);
    printf("%d-%d-%d\n",nextDate.day,nextDate.month,nextDate.year);    
}