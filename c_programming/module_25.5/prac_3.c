/*
prac 2
incomplete
*/
#include<stdio.h>
#include<stdbool.h>

struct Date{
    int day; //elements
    int month;
    int year;
};
// if(nextDate.day!=daysInMonths[nextDate.month-1]){
//         nextDate.day++;
//     }

int daysInMonths[12]={31,28,31,30,31,30,31,31,30,31,30,31};

int dayCheck(int day,int month){

    
    if( day>=1 && day <=daysInMonths[month-1] && month!=2) return 1;
    if(month==2 && day==29){

    }
    else return 0;

    // if(day==daysInMonths[month-1]) return 1;
    // else                  return 0;

}
int monthCheck(int month){
    if(1<= month && month <=12){
        return 1;
        //     //leap year check
        // if(day==29 && month==2){
        //     if(isLeapYear(year))  return true;        
        //     else                  return false;
        // }

        // }
    }
    else return 0;

}

int yearCheck(int year){
    if(year>0) return 1;
    else return 0;
    }

// bool isLeapYear(int year){
//     if( ((year%4 == 0) && (year% 100 != 0)) || (year% 400 == 0)) {
//         return true;
//     }
//     else return false;
// }

bool isValidDate(struct Date date){
        int day=date.day;
        int month=date.month;
        int year= date.year;

        int d=dayCheck(day,month);
        int m=monthCheck(month);
        int y=yearCheck(year);
        if(d==1 && m==1 && y==1) return true;
        else return false;        
 
        }

int main(){
    
    struct Date date={29,2,2017};//a date

    if(isValidDate(date)){
        printf("valid");
    }
    else{
        printf("not valid");
    }
}