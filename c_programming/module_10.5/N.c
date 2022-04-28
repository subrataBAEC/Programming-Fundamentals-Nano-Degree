#include <stdio.h>
#include <math.h>
// complete

 
int main() {
    int n,x,sum=0,count=0;

    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        scanf("%d",&x);

        if(x>0) sum=sum+x;
        else if(sum>0) sum--;
        else count++;
    }
    printf("%d\n",count);
    
    return 0;
}