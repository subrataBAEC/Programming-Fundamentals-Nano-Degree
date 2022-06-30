/*question 05
Suppose int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}. Suppose the address of
a[0] is at 6000. Find the value of the following -
a. a[8]
b. &a[5]
c. a
d. a+4
e. *(a+2)
f. &*(a+4)
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>


// driver code
int main(){
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for(int i=0; i<9; i++){
        printf("%lld %d\n",(a+i),*(a+i));
    }

    printf("1. %lld\n",a[8]);// value of a[8]
    printf("2. %lld\n",&a[5]); //add of a[5]
    printf("3. %lld\n",a); //add of a[0]
    printf("4. %lld\n",a+4);// add of a[4]
    printf("5. %lld\n",*(a+2)); //value of a[2]
    printf("6. %lld",&*(a+4)); // add of a[4]
 
   return 0;
}