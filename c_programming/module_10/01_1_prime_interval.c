//find prime numbers between a range
//using while loop
//flag default is 1, if divides by any number flag=0
#include<stdio.h>
int main() {
    int low,high,flag;
    printf("enter two prime numbers: ");
    scanf("%d %d",&low,&high);  
    if(low==1){
        low=low+1;//avoid 1
    } 

    while(low<high){
        flag=1;

        for(int i=2;i<=(low/2);i++){
            if(low%i==0){
                flag=0;
                break;
            }
        }
        if(flag==1){
            printf("%d,",low);
        }
        low++;
    }
    return 0;
}
