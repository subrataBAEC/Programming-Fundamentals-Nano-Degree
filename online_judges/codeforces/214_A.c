//codeforces_214A
//complete
//in c
/*logic 
a^2+b=n....1
a+b^2=m....2
from eq 2, min b=0 and max b=sqrt(m)
bcz from eq 2, if a=0,b=sqrt(m) (lowest allowed value of a,b is 0)
*/
#include <stdio.h>
#include<math.h>
 
int main() {
 
    int m,n,a,count=0;
    scanf("%d %d",&n,&m);

    for(int b=0; b<=sqrt(m); b++){ //from eq 2
        a=m-b*b;//eq 2
        if(a*a+b==n && a>=0){
            //printf("solution: %d %d\n",a,b);
            count++;
        }

    }
    printf("%d\n",count);

    return 0;
}