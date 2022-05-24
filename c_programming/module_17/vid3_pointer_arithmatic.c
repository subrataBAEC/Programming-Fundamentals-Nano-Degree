// pointer arithmatic 
/* 
1. pointer arithmatic  means arithmatic with address
3. pvalue>> %p >> pointer address
4. *pvalue>> %d >>value stored in that address
5. value is same as *pvalue
*/
#include <stdio.h>
#include <string.h>
int main(){
    /*
    char ch='a';
    char *pch=&ch; 
    printf("%lld address %c char\n",pch,*pch);//address, value
    pch++;
    printf("%lld address %c char\n",pch,*pch);//address, valu
    // address incrment by 1, bcz char data holds 1 byte
    */
    /*
    int num=10;
    int *pnum=&num; 
    printf("%lld address %d number\n",pnum,*pnum);//address, value
    pnum++;//incrementing address,not value
    printf("%lld address %d number\n",pnum,*pnum);//address, valu
    // address incrment by 4, bcz int data holds 4 bytes memory
    */
    //difference of two pointer
    int val1, val2;
    int *pa=&val1;
    int *pb=&val2;
    printf("pa=%lld, pb=%lld\n",pa,pb);//address
    printf("diff= %d",pa-pb);

    return 0;
}

