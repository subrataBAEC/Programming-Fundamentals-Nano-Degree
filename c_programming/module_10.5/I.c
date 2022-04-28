#include <stdio.h>
#include <math.h>
 
int main() {
 
    int n, vol_per_dr;
    long double sum=0;
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        scanf("%d",&vol_per_dr);

        long double amount=(long double)vol_per_dr/100;
        sum=sum+amount;

    }
    long double frac=sum/n;
    frac=frac*100;
    printf("%Lf\n",frac);
    return 0;
}