#include <stdio.h>
#include <math.h>
 
int main() {
 
    int year;
    scanf("%d",&year);

    for(int i=0; ; i=i+100){

        //printf("%d\n",i);
        int diff=i-year;
        if( diff>=0 &&  diff<=99){
            printf("%d\n",(i/100));
            break;
        }
   }   
    return 0;
}