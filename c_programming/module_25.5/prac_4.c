/*
prac 4
complete
link: nested structure
https://overiq.com/c-programming-101/nested-structures-in-c/#:~:text=To%20access%20the%20members%20of,member%20we%20want%20to%20access.
*/
#include<stdio.h>
#include<string.h>
#include<stdbool.h>


struct Date{
    int day;
    int month;
    int year;
};
struct Student{
    char name[100];
    int class;
    int roll;
    struct Date dob;
};
// void printDOB(struct Date st1){
//     printf("%d-%d-%d",st1.day,st1.month,st1.year);

// }
// void printStudent(struct Student st1){
//     printf("Name:%s\n",st1.name);
//     printf("Class:%d\n",st1.class);
//     printf("Roll:%d\n",st1.roll);
//     // printf("DOB:");
//     // printDOB(st1.dob);

// }

bool isBirthDay(struct Date date,struct Student st1){
    int bd_day=st1.dob.day;
    int bd_month=st1.dob.month;
    int bd_year=st1.dob.year;
    //printf("%d %d",bd_day,bd_month);
    

    if(bd_day==date.day && bd_month==date.month && date.year>bd_year) return true;
    else return false;
    }

int main(){
    struct Student st1={
        .class=4,
        .roll=23,
        .dob={13,10,1990}
    };
    char name[]="Peter Parker";
    strcpy(st1.name,name);
    //printStudent(st1);

    struct Date date={13,10,1991};//bd check


    //check HBD
    if(isBirthDay(date,st1)) printf("HBD");
    else printf("no HBD");


}