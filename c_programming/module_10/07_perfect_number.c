//single perfect number check


#include<stdio.h>
int main() {
    int n,sum=0;
    scanf("%d",&n);
        
    for(int i=1;i<n; i++){
        if(n%i==0){
            //printf("%d,",i);
            sum=sum+i;
        }
    }
    if(sum==n){
        printf("%d is perfect number",sum);
    }
    else{
        printf("%d is not perfect number",n);
    }   

    return 0;
}
