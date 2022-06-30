/* complete
Q 2
*/
#include <stdio.h>

struct Time{
    int hour;
    int minute;
    int second;
};
struct Interval{
    struct Time start;
    struct Time end;
};

int main()
{
   struct Interval time1={
       .start={05,30,00},
       .end={10,15,00}
   } ;
    printf("%d:%d:%d PM\n",time1.start.hour,time1.start.minute,time1.start.second);
    printf("%d:%d:%d PM",time1.end.hour,time1.end.minute,time1.end.second);
    return 0;
}