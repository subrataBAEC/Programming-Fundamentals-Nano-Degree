// pointer pass by address 
// we can not return multiple values from function
//we can do that using pointer by passing adress
#include <stdio.h>
#include <string.h>

int swap(int *x,int *y){
    int temp=*y;
    *y=*x;
    *x=temp;
}

int main(){
    int x=10, y=20;
    swap(&x,&y); //passing addrees
    printf("%d %d",x,y);

    return 0;
}

