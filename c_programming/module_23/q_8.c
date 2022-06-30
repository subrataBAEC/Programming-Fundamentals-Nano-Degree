// selection sort 
//complete
/*  
Modify the Selection sort function so that it sorts the array in reverse sorted order, ie.
from the largest to smallest. 
For example reverse sorting a = {3, 4, 2, 5, 1} should result
in {5, 4, 3, 2, 1}. 
Use the is_reverse_sorted() function to break early from the function if
the array is already sorted
*/
#include<stdio.h>
#include<stdbool.h>

void  RevSelectionSort(int array[],int sz);
void  swap(int *a, int *b);
bool is_reverese_sorted(int sz,int a[]);

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
    RevSelectionSort(array,sz);
    printf("\nsorted array:");

    for(int i=0; i<sz; i++){
        printf("%d ",array[i]);
    }    
    return 0;
}
//function
void  RevSelectionSort(int array[],int sz){
    for(int step=0; step<sz; step++){
        int max=array[step], pos=step;

        for(int i=step; i<sz; i++){
            if(array[i]>max){
                max=array[i];
                pos=i;
            }
        }
    swap(&array[step],&array[pos]);
    // sort checnking
    printf("\nsteps: %d\n ",step);
    printf("max value: %d found max value: %d\n",array[pos],array[step]);
    for(int i=0; i<sz; i++){
        printf("%d ",array[i]);
    }
    //is already sorted ??
    int res=is_reverese_sorted(sz,array);
    if(res==true){
        printf("sorted done\n");
        break;
    }
    else if(res==false) printf("not sorted\n");
    }
}
void  swap(int *a, int *b){
    int temp=*a;
        *a=*b;
        *b=temp;    
}
bool is_reverese_sorted(int sz,int a[]){
    int flag=0;
    for(int i=0; i<sz-1; i++){        

        if(a[i]<=a[i+1]){
            flag=1;
        }
        //printf("%d %d %d %d %d\n",i,i+1,a[i],a[i+1],flag);
    }
    if(flag!=0) return false;
    else return true;
}
