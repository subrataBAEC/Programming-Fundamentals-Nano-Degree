//return array from function
//method 2
//an aempty array is passed to store
/*
return by pointer
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int  *makeCopy(int n,int a[]);

// driver code
int main(){
    int n;//array size
    scanf("%d",&n);

    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    //copy to array out
    int *out=makeCopy(n,a);

    //print out
    for(int i=0; i<n; i++){
        printf("%d ",out[i]);
    }

   return 0;
}
//function
int* makeCopy(int n,int a[]){
    //int out[];//does not word

    int *out=(int *) malloc(n*sizeof(int));

    for(int i=0; i<n; i++){
        out[i]=a[i];
    }
    return out;



 }
