//codeforces_116_A
//complete
//in c
/*logic 


*/
#include <stdio.h>

 
int main() {
 
    int enter,leave,n;
    int total=0,max=0;
    
    scanf("%d",&n);
    

    for(int i=1; i<=n; i++){
        scanf("%d %d",&leave,&enter);
        total=total-leave+enter;
        //printf("%d\n",total);
        if(total>=max){
            max=total;
        }
    }
    printf("%d\n",max);
    return 0;
}
    



    

