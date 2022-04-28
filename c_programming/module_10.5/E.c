#include <stdio.h>
#include <math.h>

 
int main() {
 
    int target,throw,rest;
    scanf("%d %d",&throw,&target);
    // rest=target%6;
    // printf("%d",rest);

    if( target>=throw && target<=(throw*6)){
        printf("Yes\n");
    }
    else {
        printf("No\n");
    } 
    return 0;
}