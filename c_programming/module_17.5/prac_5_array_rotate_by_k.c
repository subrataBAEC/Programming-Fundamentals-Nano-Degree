/*
5.Write a function which will right rotate an array by k.
For example, array a has the values {1, 2, 3, 4, 5}. If we call RotateByK(a, 3).
Array a will have the values {4, 5, 1, 2, 3}. You can use the previous function.
*/
#include<stdio.h>
#include<string.h>

//prototype
    //int max(int n,int a[]);

// driver code
int main(){
   int a[]={1,2,3,4,5};
   int sz=sizeof(a)/sizeof(a[0]);
   long int k=3;

// original array
   printf("original:");
   for(int i=0; i<sz; i++){
    printf("%d ",a[i]);
   }

// rotate k step left
//repeat rotate_one, k times
    for(int i=1;i<=k; i++){
        array_rotate_one(sz,a);//function call
    }

//after k rotate
   printf("\nafter:");
   for(int i=0; i<sz; i++){
    printf("%d ",a[i]);
   }
   return 0;
}

// function definition
//this function rotates one step left
    void array_rotate_one(int sz,int a[]){
        int first;
        first=a[0];
        for(int i=0; i<sz-1; i++){
            a[i]=a[i+1];
        }
        a[sz-1]=first;
    }
