#include<stdio.h>


int main()
{
    int a, b, c, d, e, f, x;

    scanf("%d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&x);

    int taka = x / (a + c) * a + ((x % (a + c) > a) ? a : x % (a + c));
    int aoki = x / (d + f) * d + ((x % (d + f) > d) ? d : x % (d + f));

    if (taka * b == aoki * e)
    {

        printf("Draw\n");
    }
    else if (aoki * e > taka * b)
    {

        printf("Aoki\n");
    }
    else
    {
        printf("Takahashi\n");
    }
}