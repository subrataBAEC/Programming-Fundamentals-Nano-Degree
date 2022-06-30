/* question 06
//complete


*/
#include<stdio.h>

//function
void  swap(int *a, int *b){
    int temp=*a;
        *a=*b;
        *b=temp;    
}
void  sort(int n,int a[]){
    for(int step=0; step<n; step++){
        for(int i=n-1; i>0; i--){
            if(a[i]<a[i-1]){
                swap(&a[i] ,&a[i-1]);
            }
        }
        printf("steps:%d\n",step);
        for(int i=0; i<n; i++){
            printf("%d ",a[i]);
        }
        printf("\n");
    }
}
// driver code
int main(){
    int sz;
    scanf("%d",&sz);
    int array[sz];

    for(int i=0; i<sz; i++){
        scanf("%d",&array[i]);
    }
    sort(sz,array);
    printf("after sorting:");
    for(int i=0; i<sz; i++){
        printf("%d ",array[i]);
    }    
   return 0;
}

