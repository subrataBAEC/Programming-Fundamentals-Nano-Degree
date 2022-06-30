/* question 04
Dynamically allocate an array of floats with 100 elements. 
How much memory does it take?
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


// driver code
int main(){
    int n=1000;
    //float a[n];

    
    float *a=(float*)malloc(n*sizeof(float));
    int sz=sizeof(a);
    printf("%d",sz);


   return 0;
}
/*
Because 8 is the size of the pointer variable. – 
If malloc does not return NULL it allocated the amount of memory you requested. 
That is what you should be checking.


*/
