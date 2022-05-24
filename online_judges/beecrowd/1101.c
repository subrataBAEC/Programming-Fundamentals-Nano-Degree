//beecrowd 1101

#include<stdio.h>
int main() {
    int m,n;
    for(int i=0; ;i++){
        int sum=0;
        scanf("%d %d",&m,&n);

        if(m<=0 || n<=0) break;

        else{
            if (m>n) {
                int temp=m;
                m=n;
                n=temp;
            }
            for(int j=m; j<=n; j++){
                printf("%d ",j);
                sum=sum+j;
            }
            printf("Sum=%d",sum);
        }
        printf("\n");
    }
    //printf("\n");

    return 0;
}
