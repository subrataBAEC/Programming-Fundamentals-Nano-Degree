//beecrowd 1146

#include<stdio.h>
int main() {
    int n;

    for(int i=0; ; i++){
        scanf("%d",&n);
        if(n==0) break;
        for(int i=1; i<=n; i++){
            printf("%d",i);
            if(i!=n) printf(" ");//avoid last space
        }
        printf("\n");
    }
    
    
   
   //printf("\n");

    return 0;
}
