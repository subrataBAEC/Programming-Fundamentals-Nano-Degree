/* question 09
//complete
We wrote a program to find all positions of a 
character in a string with the strchr function. 
Now do the same without using strchr.

*/
#include<stdio.h>

// driver code
int main(){
    char str[]="proprogrammipngp";
    char ch='p';

    int len=strlen(str);

    for(int i=0; i<len; i++){
        if(str[i]==ch){
            printf("p is at index %d\n",i);
        }
    }
    return 0;
}

