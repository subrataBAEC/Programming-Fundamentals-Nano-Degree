// Write a program in C that takes two inputs x and y 
//and prints all numbers that are multiples of x but divisors of y.  If there are none, print no such integers.
// Test Data :
// 5 20
// Expected Output :
// 5 10 20
// Test Data :
// 6 20
// Expected Output :
// No such integers

#include<stdio.h>
int main() {
    int a,b,count=0;
    scanf("%d %d",&a,&b);    
    int mult;
    //printf("%d %d\n",a,b);

    for(int i=1; i<=b; i++){
        mult=i*a;        
         if(mult <= b){
            //printf("%d ",mult);// multiples of x
            
            if(b% mult==0){
                printf("%d ",mult); // multiples of x and divisors of y both
                count++;
            }
        }  
    }
    if(count==0){
        printf("no such integer");
    }
    return 0;
}
