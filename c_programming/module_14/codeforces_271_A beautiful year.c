//codeforces 271A beautiful year

/* logic:
 divide into digits and compare if they are similar.
 if none are same,thats the answer.
*/

#include <stdio.h>
#include <string.h>
int main(){
    int year;
    scanf("%d",&year);
    int i=1;
    while(1){
        year=year+1;
        int a=year/1000; //1st digit
        int b=(year/100)%10;
        int c=(year/10)%10;
        int d=year%10;
        i++;
        printf("%d\n",year);
        printf("%d %d %d %d\n",a,b,c,d);
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
            printf("%d\n",year);
            break;
        }
    }
    return 0;
}
