/*complete
1.Write a function that takes no input and prints the number of times the function has been called. 
Hint: Use static variables.
Example: printCall(); printCall(); printCall();  will print 
“Called 1 times”
“Called 2 times”
“Called 3 times”
hints: https://www.geeksforgeeks.org/static-variables-in-c/
*/
#include<stdio.h>
#include<string.h>

//prototype
int printCall();

// driver code

int main(){
    printf("Called %d times\n", printCall());
    printf("Called %d times\n", printCall());
    printf("Called %d times\n", printCall());  
}

// function definition
int printCall(){
    static int count=0;
    count++;
    return count;
}