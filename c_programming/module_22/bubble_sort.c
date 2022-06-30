// bubble sort
/*  
source: https://www.programiz.com/dsa/selection-sort
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void  bubbleSort(int array[],int sz);
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
    bubbleSort(array,sz);
    printf("after sorting:");

    for(int i=0; i<sz; i++){
        printf("%d ",array[i]);
    }  
    
   return 0;
}
//function
void  bubbleSort(int array[],int sz){
    for(int step=0; step<sz; step++){
        for(int i=0; i<sz-1; i++){
            if(array[i]>array[i+1]){
                swap(&array[i] ,&array[i+1]);
            }
        }
        printf("steps:%d\n",step);
        for(int i=0; i<sz; i++){
            printf("%d ",array[i]);
        }
        printf("\n");
    }
    

}
void  swap(int *a, int *b){
    int temp=*a;
        *a=*b;
        *b=temp;    
}




/*



*/


