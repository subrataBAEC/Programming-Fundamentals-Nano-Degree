// fibonacchi
// sum of previous two number after first two
// 0,1,1,2,3,5,8,13

#include<stdio.h>
int main() {
    int limit,first=0,second=1,sum=0;
    scanf("%d",&limit);
    //printf("%d %d",first,second);
    
    for(int i=1;i<=limit-2; i++){
        //for 0 and 1
        if(first==0 && second==1){
            printf("%d%d",first,second);
        }       
        // for others 
        sum=first+second;
        first=second;
        second=sum;
        printf("%d",sum);

    }

    return 0;
}
