//pass by addreess,pass by value

#include <stdio.h>
void swap(int *n1, int *n2);
void square(int num3);

int main()
{
    int num1 = 5, num2 = 10;
    int num3= 20;

    // address of num1 and num2 is passed
    swap( &num1, &num2);
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    square(num3);
    printf("in main function num3 = %d\n", num3);

    return 0;
}
void square(int num3)
{
    num3=num3*num3;
    printf("inside function sum3=%d\n",num3);
}
void swap(int* n1, int* n2)
{
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}