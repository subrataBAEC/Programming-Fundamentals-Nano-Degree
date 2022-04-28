// Fizzbuzz is a very well known problem. Given a positive integer N, you need to print n lines.
// For multiples of 3, you should print Fizz.
// For the multiples of 5, you should print Buzz.
// For numbers which are multiple of 3 and 5 both, print “FizzBuzz”.
//         In other cases, print the current line number.
// Example
// Input: 5
// Output:
// 1
// 2
// Fizz
// 4
// Buzz  
// at serial 15 it should print FizzBuzz15

#include<stdio.h>
#include<ctype.h>

int main() {	
	int n;		
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        //printf("%d: ",i); // to check serial
        if(i%3 ==0 && i%5 ==0 ){
        printf("FizzBuzz\n");
        }
        else if(i%3==0){
            printf("Fizz\n");
        }
        else if(i%5==0){
            printf("Buzz\n");
        }        
        else if(i%3 !=0 || i%5 !=0 ){
        printf("%d\n",i);
        }
    }
	return 0;
}