/**
 * Q 9
 * complete
 * first find the  position of the leftmost set bit
 * then flip the bit at that position.
 * help: https://codeforwin.org/2016/01/c-program-to-toggle-nth-bit-of-number.html
 */

#include <stdio.h>

int main()
{
    int a=44, n=0, b;

    // get postition of leftmost 1

    int num=a;
    int pos=0;
    while(num>0){
        num=num>>1;
        pos++;
    }
    printf("%d\n",pos);
    n=pos-1; //n=6, to 5th bit from right


     // Left shifts 1, n times
     // then perform bitwise XOR 

    b = a ^ (1 << n);

    printf("before fliping %d (in decimal)\n",a);
    printf("after fliping %d (in decimal)\n", b);
    return 0;
}