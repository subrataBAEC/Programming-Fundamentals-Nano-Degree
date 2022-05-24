// even-odd
//
/*

*/
#include<stdio.h>
#include<string.h>

//prototype
    void swap(int *p,int *q);

// driver code
int main(){
   int a;
   scanf("%d",&a);
   even_odd(a);
   return 0;
}
// function
    void even_odd(int a){
      if (a%2==0) printf("even");
      else printf("odd");
    }
