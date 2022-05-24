/*
Write a function that will take an array and find its maximum.
*/
#include<stdio.h>
#include<string.h>

//prototype
    int max(int n,int a[]);

// driver code
int main(){
   int a[]={1,2,30,4,5};

   int res=max(5,a);// size, array
   printf("%d",res);

   return 0;
}
// function
    int max(int n,int a[]){
     int max=a[0];
     for(int i=0; i<n; i++){
        if(a[i]>max){
            max=a[i];
        }
     }
     return max;
}
