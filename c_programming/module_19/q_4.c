/*
complete.
4.void makeSum(int a, int b, int *sum)
The above function takes as input two integers a and b and 
stores their sum in the variable sum. Implement the function.
*/
#include<stdio.h>
#include<string.h>

// function
void makeSum(int a, int b, int* sum){
   *sum=a+b;
}

// driver code
int main(){
    int a,b,sum=10;
    int* psum; // pointer type
    psum=&sum; // address

    
    printf("enetr two integers:");
    scanf("%d %d",&a,&b);
    makeSum(a,b,&sum);

    
    printf("%d",sum);
    return 0;
}

