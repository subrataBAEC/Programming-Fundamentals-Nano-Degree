#include <stdio.h>
int main()
{
    int x = 25, y = 6;
    //11001
    //  110
    printf("a. X & 0= %d\n", x&0);
    printf("b. X & X= %d\n", x&x);
    printf("c. X ^ X= %d\n", x^x);
    printf("d. X ^ Y ^ X= %d\n", x^y^x);
    printf("e. (X & Y) | Y= %d\n", (x&y)|y);
    printf(" %d\n", x&y);

    return 0;
}