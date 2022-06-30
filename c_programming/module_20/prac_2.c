//prac_B
//complete
/*

1. 

*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int countUpper(char str[]);

int main() {
    
    char str[110];
    scanf("%s",str);
    
    int len=strlen(str);

    int up=countUpper(str);
    int low=len-up;
    // printf("%d",up);
    // printf("%d",low);
    if(up>low){
        strupr(str);
    }
    else{
        strlwr(str);// covert to lower

    }
    printf("%s\n",str);

    return 0;
}
// vowel removing function

int countUpper(char str[]){
    int count=0;
    for(int i=0; str[i]!='\0'; i++){
        if(isupper(str[i])) count++;
    }
    return count;        

}    



