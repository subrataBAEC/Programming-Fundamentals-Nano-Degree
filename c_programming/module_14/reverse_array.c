//reversing an array
//use two different arrays
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int array[n],rev_array[n];

    //array input
    for(int i=0; i<n; i++){
        scanf("%d",&array[i]);
    }
    //array reverse
    for(int i=0; i<n; i++){
        rev_array[n-1-i]=array[i];
        //printf("%d\n",rev_array[i]);
    }
    for(int i=0; i<n; i++){
        printf("%d ",rev_array[i]);
    }
    return 0;
}

/*logic: for n=5
index   0 1 2 3 4
array   1 2 3 4 5
reverse 5 4 3 2 1
position change, sum is 4(n-1=4)
        0--4(5-1-0)  (n-1-i)
        1--3(5-1-1)
        2--2(5-1-2)
        3--1(5-1-3)
        4--0(5-1-4)
*/
