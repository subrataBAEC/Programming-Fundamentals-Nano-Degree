/*
4.Write a function which will right rotate an array by k.
For example, array a has the values {1, 2, 3, 4, 5}. If we call Rotate(a).
Array a will have the values {2, 3, 4, 5, 1}.
*/
#include<stdio.h>
#include<string.h>

//prototype
    //int max(int n,int a[]);

// driver code
int main(){
   int a[]={1,2,3,41,5};
   int sz=sizeof(a)/sizeof(a[0]);

   // original array
   printf("original:");
   for(int i=0; i<sz; i++){
    printf("%d ",a[i]);
   }
    // rotate one step left
   array_rotate(sz,a);//function call
   //after one rotate
   printf("\nafter:");
   for(int i=0; i<sz; i++){
    printf("%d ",a[i]);
   }
   return 0;
}
// function definition
    void array_rotate(int sz,int a[]){
        int first;
        first=a[0];
        //printf("\n%d",val);
        for(int i=0; i<sz-1; i++){
            a[i]=a[i+1];
        }
        a[sz-1]=first;
    }
