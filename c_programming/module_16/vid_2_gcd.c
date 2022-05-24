// print gcd using function
#include <stdio.h>
#include <string.h>

void print_gcd(int x, int y){
    printf("inputes %d %d\n",x,y);
    while(y>0){
        int temp=x%y;
        x=y;
        y=temp;
    }
    int gcd=x;
    printf("%d",gcd);
}
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    print_gcd(n,m);
    return 0;
}

