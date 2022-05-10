/*8.Write a C program to find reverse of a given string.
Example
Input:
Hello
Output:
Reverse string: olleH
*/
#include <stdio.h>
#include <string.h>

int main() {
    
    char a[100]="Hello";
    int len=strlen(a);
    printf("%d\n",len);

    //print in single
    for(int i=0; i<len;i++){
        printf("%c\n",a[i]);
    }
    //print in reverse
    printf("\nin reverse: ");
    for(int i=len-1; i>=0;i--){
        printf("%c",a[i]);
    }
    return 0;
}