// selection sort
/*  
source: https://www.programiz.com/dsa/selection-sort
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void  selectionSort(int array[],int sz);
void  swap(int *a, int *b);

// driver code
int main(){
    int sz;
    scanf("%d",&sz);
    int array[sz];

    for(int i=0; i<sz; i++){
        scanf("%d",&array[i]);
    }

    // for(int i=0; i<n; i++){
    //     printf("%d ",array[i]);
    // }
    selectionSort(array,sz);
    printf("after sorting:");

    for(int i=0; i<sz; i++){
        printf("%d ",array[i]);
    }  
    
   return 0;
}
//function
void  selectionSort(int array[],int sz){
    for(int step=0; step<sz; step++){
        int min_idx=step;
        for(int i=step+1; i<sz; i++){
            if(array[i]<array[step]){
                min_idx=i;
            }
        }
    swap(&array[min_idx],&array[step]);
    }
}
void  swap(int *a, int *b){
    int temp=*a;
        *a=*b;
        *b=temp;    
}




/*



*/


