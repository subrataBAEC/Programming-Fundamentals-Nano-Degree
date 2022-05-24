//beecrowd 1174
/*

*/
#include<stdio.h>
#include<string.h>



// driver code
int main(){

    double arr[100];
    for(int i=0; i<100; i++){
        scanf("%lf",&arr[i]);
    }
    for(int i=0; i<100; i++){
        if(arr[i]<=10){
            printf("A[%d] = %0.1lf\n",i,arr[i]);
        }
    }

   return 0;
}
