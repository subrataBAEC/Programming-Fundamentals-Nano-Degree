//return array from function
//method 1
//an aempty array is passed to store
/*
this method has a problem, if n in out[n] doesnot match for some mistake, then it will creat problem
so dynamic mem. allocation can be used
*/
#include<stdio.h>
#include<string.h>

// driver code
int main(){
    int n;//array size
    scanf("%d",&n);

    int a[n];
    int out[n];//same size array

    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    //copy to array b
    makeCopy(n,a,out);

    //print out
    for(int i=0; i<n; i++){
        printf("%d ",out[i]);
    }

   return 0;
}
//function
void makeCopy(int n,int a[],int out[]){

    for(int i=0; i<n; i++){
        out[i]=a[i];
    }



 }
