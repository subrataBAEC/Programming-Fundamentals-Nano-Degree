/* complete
Q 8
*/
#include <stdio.h>

int main(){
    int a=1,b=9;//inclusive
    int res=0;

    for(int i=a; i<=b; i++){
        //printf("%d",i);
        res=res^i;
    }
    printf("%d",res);
}
    