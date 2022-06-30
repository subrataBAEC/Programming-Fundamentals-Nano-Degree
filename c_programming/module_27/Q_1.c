/* complete
Q 1
*/
#include <stdio.h>

struct Time{
    int hour;
    int minute;
    int second;
};
int main(){
    int flag=3;
    struct Time time={6,30,00} ;

    if(time.hour==12){
       printf("%d:%d PM",time.hour,time.minute);
    }
    else if(time.hour==24){
       time.hour=12;
       printf("%d:%d AM",time.hour,time.minute);
    }
    else if(time.hour>12){
       time.hour=time.hour-12;
        printf("%d:%d",time.hour,time.minute);
        flag=1;
   }
    else if(time.hour<12){
        printf("%d:%d",time.hour,time.minute);
        flag=0;
   }

    if(flag==1)   printf(" PM");
    else if(flag==0)   printf(" AM");
    return 0;
}