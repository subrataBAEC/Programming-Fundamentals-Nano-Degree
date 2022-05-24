/*
6.Write a function that outputs the element wise sum of two equal sized array.
It should have the signature void add(int a[], int b[], int sum[]).
Use the sum variable for outputting the sum.
Example: a = {1, 2, 3}, b = {2, 3, 4}. Then sum should be {3, 5, 7}
*/
#include<stdio.h>
#include<string.h>

//prototype


// driver code
int main(){
    int sum[]={0,0,0};
    int a[] = {1, 2, 3};
    int b[] = {2, 3, 4};
    int sz=3;
    add(a,b,sum,sz);

    printf("{");
    for(int i=0; i<3; i++){
    printf("%d, ",sum[i]);
    }
    printf("}");
    return 0;
}
// function
void add(int a[], int b[], int sum[],int sz){
    for(int i=0; i<3; i++){
        sum[i]=a[i]+b[i];
    }
}
