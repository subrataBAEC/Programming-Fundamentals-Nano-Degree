#include <stdio.h>
#include <math.h>
 
int main() {

    long long int n;
    scanf("%lld",&n);

    int low=pow(-2,31);
    int high=pow(2,31)-1;

    if(low<=n && n<=high){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}