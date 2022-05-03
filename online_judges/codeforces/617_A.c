//codeforces_617_A
//complete
//in c
/*logic 


*/
#include <stdio.h>

 
int main() {
 
    int steps,x,count=0;
    scanf("%d",&x);

    steps=x/5;

    if(x%5==0){
        printf("%d\n",steps);
    }
    else{
        printf("%d\n",steps+1);
    }
    return 0;
}
    



    

