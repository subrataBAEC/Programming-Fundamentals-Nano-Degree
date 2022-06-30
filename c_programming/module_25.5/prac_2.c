/*
prac 2
complete
*/
#include<stdio.h>
#include<string.h>


struct Date{
    int day;
    int month;
    int year;
};
struct Student{
    char name[100];
    int class;
    int roll;
    struct Date dob;//struct inside struct
};
void printDOB(struct Date st1){
    printf("%d-%d-%d",st1.day,st1.month,st1.year);

}
void printStudent(struct Student st1){
    printf("Name:%s\n",st1.name);
    printf("Class:%d\n",st1.class);
    printf("Roll:%d\n",st1.roll);
    printf("DOB:");
    printDOB(st1.dob);

}

int main(){
    struct Student st1={
        .class=4,
        .roll=23,
        .dob={16,10,1982}
    };
    char name[]="Peter Parker";
    strcpy(st1.name,name);
    printStudent(st1);

}