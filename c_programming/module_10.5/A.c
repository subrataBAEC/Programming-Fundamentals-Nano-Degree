#include <stdio.h>
#include <math.h>

 
int main() {
 
    int total,c;

    scanf("%d %d",&total,&c);

    int rest=total-(2*c);
    if(rest>=0){
        printf("%d\n",rest);
    }
    else{
        rest=0;
        printf("%d\n",rest);
    }


    return 0;
}