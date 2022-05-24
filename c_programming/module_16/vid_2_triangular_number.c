// print nth triangular number
#include <stdio.h>
#include <string.h>

void print_tri_angular_number(int k){
    int sum=0;
    for(int i=1; i<=k; i++){
        sum=sum+i;
    }
    printf("%d",sum);
}
int main(){
    int n;
    scanf("%d",&n);
    print_tri_angular_number(n);
    return 0;
}

