//perfect number check between interval
// Expected Output : 
// between 1 and 50,
// 6 and 28 are perfect numbers

#include<stdio.h>
int main() {
    int low=1,high=9000,sum=0;
    //scanf("%d %d",&low,&high);
        
    for(int i=low;i<=high; i++){       
        sum=0;
        for(int j=1; j<i; j++){
            //printf("%d",j);
            if(i%j==0){
                sum=sum+j;
                //printf("%d,",sum);                
                //printf("%d",j);
            }
        }
        if(sum==i){
            printf("%d,",i);
        }
    }
    return 0;
}
