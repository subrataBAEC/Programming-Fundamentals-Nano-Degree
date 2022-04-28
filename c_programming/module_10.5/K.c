#include <stdio.h>
#include <math.h>
 
int main() {

    int n,x;
    int flag=0;
    scanf("%d",&n);

    for(int i=1; i<=n ;i++){
        scanf("%d",&x);
        if(x==1){
            flag=1;
        }       
    }
    if(flag==1){
        printf("HARD\n");
    }
    else{
         printf("EASY\n");
    }    
    return 0;
}