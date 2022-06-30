// calculate product of elements
//access array elements using pointer

/*  a[i] and *(a+i) are some

*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// driver code
int main(){
    int n;//array size
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        //scanf("%d",&a[i]); 
        scanf("%d",&*(a+i));//same 
    }
    int prod=1;

    for(int i=0; i<n; i++){
        //prod=prod*a[i];
        prod=prod* *(a+i); //a[i]==*(a+i)
    }
    printf("%d\n",prod);
    
   return 0;
}
/*

a>     a[0]      a[1]    a[2]
        ______, _______,________
address>   a        a+1     a+2

(a+i) is address and *(a+i) is value

*/


