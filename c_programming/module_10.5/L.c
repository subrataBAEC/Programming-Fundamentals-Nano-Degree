#include <stdio.h>
#include <math.h>
// incomplete

 
int main() {

    int n,k=0;//k'th element
    int count=0;
    scanf("%d",&n);

    while(n--){
        scanf("%d",&k);
        for(int i=1; ; i++){
            //scanf("%d",&x);
            if( (i%3==0) || (i%10==3) ){
                continue;
            } 
            else{
                k--;
                if(k==0){
                    printf("%d\n",i);
                    break;
                }
            }            
        } 

    }
    return 0;
}