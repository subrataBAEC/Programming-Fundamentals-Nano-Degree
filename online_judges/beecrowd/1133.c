//beecrowd 1133

#include<stdio.h>
int main() {
    int m,n;
    scanf("%d %d",&m,&n);
    if (m>n) {
        int temp=m;
        m=n;
        n=temp;
    }

    for(int i=m+1; i<n; i++){
        
        if(i%5==2 || i%5==3){
            printf("%d\n",i);
        }
    }
   
   //printf("\n");

    return 0;
}
