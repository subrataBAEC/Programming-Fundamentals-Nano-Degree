
#include <stdio.h>
#include <math.h>

 
int main() {
 
    int n;
    
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        if(i%2!=0){
            printf("I hate ");
        }
        if(i%2==0){
            printf("I love ");
        }
        if(i!=n){
            printf(" that ");
        }
    }
    printf("it");
    return 0;
}