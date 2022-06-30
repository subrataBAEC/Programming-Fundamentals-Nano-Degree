/*
function and structure
print happy new year
*/
#include<stdio.h>
#include<stdbool.h>

struct Date{
    int day; //elements
    int month;
    int year;
};
// function input from struct
bool isFirstDay(struct Date date){
    return date.day==1 && date.month==1;
}
// function output from struct
struct Date getFirstDay(int year){
    struct Date ans={1,1,year};
    return ans;
}
//function for print
void printDate(struct Date date2){
    printf("%d %d %d\n",date2.day,date2.month,date2.year);
}

int main(){
    
    // function input from struct
    //if fisrt day of a year,print happy new year
    struct Date date={1,1,2020};

    if(isFirstDay(date)){
        printf("function input from struct: Happy new year\n");
    } 

    //function output from struct
    //get the fisrt day of a year
    struct Date date2=getFirstDay(2022) ;
    printDate(date2);

    return 0;
}