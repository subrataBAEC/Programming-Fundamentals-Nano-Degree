//1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms
#include<stdio.h>
int main() {
    int n;
    float sum=0;
    scanf("%d",&n);
        
    for(int i=1;i<=n; i++){
        sum=sum+(1.00/i);
    }
    printf("%f",sum);

    return 0;
}
