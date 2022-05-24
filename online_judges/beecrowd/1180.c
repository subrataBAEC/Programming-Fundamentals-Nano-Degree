//beecrowd 1180
//in complete
/*

*/
#include<stdio.h>
#include<string.h>

// driver code
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    int index;
    for(int i=0; i<n; i++){
       if(arr[i]<min){
        min=arr[i];
        index=i;
       }
    }
    //printf("%d %d",index,min);
//    printf("Menor valor: %d\n",min);
//    printf("Posicao: %d",index);

    printf("Menor valor: %d\nPosicao: %d\n", min, index);



   return 0;
}
