#include <stdio.h>
#include <math.h>

 
int main() {
 
    int a,b,c,ab,abc;
    
    scanf("%d %d %d",&a,&b,&c);
    // equation: major=(max+min)/2
    // equation: minimum=(max-min)/2
    
    //major ab
    ab=(a+b+abs(a-b))/2;
    //major abc
    abc=(ab+c+abs(ab-c))/2;

    printf("%d eh o maior",abc);
    
 
    return 0;
}