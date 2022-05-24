/* complete
7.return by address mechanism 
swap two variables
*/
#include<stdio.h>
#include<string.h>

// function definition    
void swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

// driver code
int main(){
    int a=10,b=20;

    swap(&a,&b);
    printf("%d %d",a,b);

   return 0;
}

        

