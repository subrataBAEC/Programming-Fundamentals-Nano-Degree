//codeforces_158_A
//complete
//in c
/*logic 
1. detect the kth value from array as p
2. compare each element with p and zero
*/
#include <stdio.h>
#include<math.h>
 
int main() {
 
    int n,k,p,count=0;
    int x[50];
    
    scanf("%d %d",&n,&k);
    
    for(int i=1; i<=n ;i++){
        scanf("%d",&x[i]);
        //detect kth value
        if(i==k){
            p=x[i];  //p has kth value          
            //printf("%d\n",p);
        } 
    }
 
    for(int i=1; i<=n ;i++){
         if(x[i]>=p && x[i]>0){
             //printf("pos %d value %d kth value %d\n",i,x[i],p);
             count++;
        }
    }
    printf("%d\n",count);
    

    return 0;
}