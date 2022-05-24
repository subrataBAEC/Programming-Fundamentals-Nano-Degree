/*incomplete
6.pose, you call Rotate ByK(a, 1000000000). 
You will find that your program takes a lot of time. 
How can you optimize your program? 
Hint: What happens when you rotate by the array length?
*/
#include<stdio.h>
#include<string.h>

//prototype
    //int max(int n,int a[]);

// driver code
int main(){
   int a[]={1,2,3,4,5};
   int sz=sizeof(a)/sizeof(a[0]); 
   long int k=1000000000;
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
