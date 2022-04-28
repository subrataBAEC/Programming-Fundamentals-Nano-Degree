#include <stdio.h>
#include <math.h>

 //complete
int main() {
 
    int total=0,f,m,s;
    scanf("%d %d %d %d",&total,&f,&m,&s);

    for(int i=1; ; i++){
        if(total<0) {printf("T\n");break;}
        total=total-f;

        if(total<0) {printf("F\n");break;}
        total=total-m;

        if(total<0) {printf("M\n");break;}        
        total=total-s;
        
    }
 
    return 0;
}