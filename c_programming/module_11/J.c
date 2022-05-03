#include <stdio.h>
#include <math.h>

 
int main() {
 
    int num,mul=1,sum=0,reverse=0;
    int a,b,c;
    scanf("%d",&num);
    int org_num=num;

    for(int i=1;i<=3;i++){
        int digit=num%10;
        if(i==1){
            c=digit;
        }
        if(i==2){
            b=digit;
        }
        if(i==3){
            a=digit;
        }
        num=num/10;
        reverse=reverse*10+digit;

    }
    //printf("%d %d %d",a,b,c);
    sum=org_num+(b*100+c*10+a*1)+(c*100+a*10+b*1);

    //sum=org_num+reverse;
    printf("%d\n",sum);

    return 0;
}