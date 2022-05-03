//codeforces_977_A
//complete
//in c
/*logic 


*/
#include <stdio.h>

 
int main() {
 
    int num,n;
    scanf("%d %d",&num,&n);

    for(int i=1; i<=n; i++){
        if(num%10==0){
            num=num/10;
        }
        else if(num%10!=0){
            num=num-1;
        }
    }
    printf("%d\n",num);
    return 0;
}
    



    

