#include <stdio.h>
#include <math.h>
 
int main() {
 
    int n,fence_h,per_h,count=0;
    scanf("%d %d" ,&n,&fence_h);

    for(int i=1; i<=n; i++){
        scanf("%d",&per_h);

        if(per_h>fence_h){
            count++;
        }        
    }  
    int width= (n-count)*1+count*2;
    printf("%d\n",width);
    return 0;
}