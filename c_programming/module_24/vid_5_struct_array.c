/*
array and structure
studnt information,name,roll,class
struct inside struct
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
//print student DOB
void printDOB(struct Date st1){
    printf("%d-%d-%d\n",st1.day,st1.month,st1.year);
}

//print student name,class,roll,DOB
void printStudent(struct Student st1){
    printf("Name: %s\n",st1.name);
    printf("class: %d\n",st1.class);
    printf("roll: %d\n",st1.roll);
    printf("DOB ");
    printDOB(st1.dob);

}

int main(){
    // string ,array can be declared like class,roll
    struct Student st1={
        .class=9,
        .roll=100,
        .dob={1,1,2000}
    };
    //for input string
    char name[]="subrata saha";
    strcpy(st1.name,name);
    printStudent(st1);
    
    return 0;
}