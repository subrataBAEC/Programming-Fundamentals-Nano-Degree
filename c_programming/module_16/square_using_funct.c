// swap
// need to use pointer
/*

*/
#include<stdio.h>
#include<string.h>

//prototype
    void swap(int *p,int *q);

// driver code
int main(){
   int a,b;
   scanf("%d %d",&a,&b);
   swap(&a,&b);

   printf("%d %d",a,b);
   return 0;
}
// function
    void swap(int *p,int *q){
        //p=&a so p store the address of a, so *p store the value of a
	//  //q=&b so q store the address of b, so *q store the value of b
        int temp=*p;
        *p=*q;
        *q=temp;
    }
