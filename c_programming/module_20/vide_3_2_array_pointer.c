//diff between array and pointer_2

#include<stdio.h>
#include<math.h>
int main() {
    int a[10]={1,2,3,4,5,6,7,8,9,10};    
    //one diff between pointer and array
    // array size is lost in function
    int sz=sizeof(a);
    printf("%d\n",sz);
    f(a);
    return 0;
}
int f(int a[]){ //*a is same
    int sz=sizeof(a);
    printf("%d\n",sz);
}