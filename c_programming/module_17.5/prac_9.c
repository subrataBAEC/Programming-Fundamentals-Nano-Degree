/* complete
9.In the following code, complete the box such that it prints “20 40”.

*/
#include<stdio.h>
#include<string.h>

int main(){
    const int n = 20;
    printf("%d",n);

    int *pn=&n; //address
    *pn=40; //*pn equals n
    printf(" %d",n);
    //return 0;
}
