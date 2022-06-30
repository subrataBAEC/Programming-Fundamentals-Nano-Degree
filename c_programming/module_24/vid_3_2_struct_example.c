/*
structer example
input a date and print next n dates
*/

#include<stdio.h>
struct Date{
    int day; //elements
    int month;
    int year;
};

int daysInMonths[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int main(){
    int days;
    struct Date start;
    printf("enter starting date: ");
    scanf("%d %d %d",&start.day,&start.month,&start.year);

    printf("how many dates?");
    scanf("%d",&days);
    printf("start: %d-%d-%d\n",start.day,start.month,start.year);

    struct Date nextDate=start;

    for(int i=0; i<days; i++){
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
    printf("%d-%d-%d\n",nextDate.day,nextDate.month,nextDate.year);    

    }
}