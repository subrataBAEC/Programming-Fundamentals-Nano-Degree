#include <stdio.h>
#include <math.h>

 
int main() {
 
    double x1,y1,x2,y2,dis;
       
    scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
    dis=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
    dis=sqrt(dis);
    
    printf("%lf",dis);
     
    return 0;
}