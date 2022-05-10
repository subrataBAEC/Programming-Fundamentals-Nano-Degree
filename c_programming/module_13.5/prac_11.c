/*11.Write a C program to count all occurrences of a character in a string.
Example
Input
Input string: I love programming. I love Philtron.
Input character to search: o
Output
Total occurrences of 'o': 4
*/
#include<stdio.h>
#include<string.h>

int main(){

    int count=0;
    char s[]="I love programming. I love Philtron.";
    char c;
    printf("Input character to search: ");
    scanf("%c",&c);
    //printf("%c",c);
    int len=strlen(s);
    printf("string length:%d\n",len);

    for(int i=0; i<len; i++){
        if(s[i]==c){
            count++;
        }
    }
    printf("Total occurrences of '%c' : %d",c,count);
    return 0;
}
