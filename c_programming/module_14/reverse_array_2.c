//reversing an array
//use a single array
//more optimized and efficient
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    //array input
    for(int i=0; i<n; i++){
        scanf("%d",&array[i]);
    }
    //array reverse
    for(int i=0,j=n-1; i<j; i++,j--){ //i<n does not work
        int temp=array[i]; //swap
        array[i]=array[j];
        array[j]=temp;

        for(int i=0; i<n; i++){
            printf("%d ",array[i]);
        }
        printf("\n");
    }
    printf("reverse:");
    for(int i=0; i<n; i++){
        printf("%d ",array[i]);
    }
    return 0;
}

/*logic: for n=5
pos     0 1 2 3 4
        i++, j--   1 2 3 4 5
        -----------------------
        i=0 j=4 -- 5 2 3 4 1
        i=1 j=3 -- 5 4 3 2 1
        i=2 j=2 -- 5 4 3 2 1
        i=3 j=1 -- 5 2 3 4 1
        i=4 j=0 -- 1 2 3 4 5

the problem is string goes back to original after reversing.
to solve this, loop must stop when i==j and i>j

*/
