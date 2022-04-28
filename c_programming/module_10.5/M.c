#include <stdio.h>
#include <math.h>
 
int main() {

    int n,x;
    scanf("%d",&n);

    if(1<=n && n<=125){
        printf("4\n");
    }
    else if(126<=n && n<=211){
        printf("6\n");
    }
    else if(212<=n && n<=214){
        printf("8\n");
    }

    return 0;
}