
#include <stdio.h>
#include <math.h>

 
int main() {
 
     
    int x,a,b;
    scanf("%d %d",&a,&b);

    x=(b-a)+1;

    if(x>=0) printf("%d\n",x);
    else  printf("0\n");

    return 0;
}