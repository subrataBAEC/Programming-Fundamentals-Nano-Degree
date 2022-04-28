// You will be given three numbers X, Y and N. You need to print the integers from 11 to NN. If any number is divisible by XX then replace it with Fizz or, if they are divisible by YY, replace it with Buzz. If the number is divisible by both XX and YY, you print FizzBuzz instead.

// Input
// Input contains a single test case. Each test case contains three integers on a single line, XX, YY and NN (1 \leq X < Y \leq N \leq 1001≤X<Y≤N≤100).

// Output
// Print integers from 11 to NN in order, each on its own line, replacing the ones divisible by XX with Fizz, the ones divisible by YY with Buzz and ones divisible by both XX and YY with FizzBuzz.

// Sample 1
// Inputcopy	Outputcopy
// 2 3 7
// 1
// Fizz
// Buzz
// Fizz
// 5
// FizzBuzz
// 7
// Sample 2
// Inputcopy	Outputcopy
// 2 4 7
// 1
// Fizz
// 3
// FizzBuzz
// 5
// Fizz
// 7

#include<stdio.h>
#include<ctype.h>

int main() {	
	int x,y,n;		
    scanf("%d %d %d",&x,&y,&n); //x=fizz,y=buzz
    for(int i=1;i<=n;i++){
        //printf("%d: ",i); // to check serial
        if(i%x ==0 && i%y ==0 ){
        printf("FizzBuzz\n");
        }
        else if(i%x==0){
            printf("Fizz\n");
        }
        else if(i%y==0){
            printf("Buzz\n");
        }        
        else if(i%x !=0 || i%y !=0 ){
        printf("%d\n",i);
        }
    }
	return 0;
}