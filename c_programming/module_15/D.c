//D
//complete

/*logic 


*/
#include <stdio.h>
#include<ctype.h>
#include<string.h>
 
int main() {
 
    char word[1500];
    //int count=0,distinct=0;

    scanf("%s",word);//input until newline    
    int len=strlen(word);
    for(int i=0; i<len; i++){
       // printf("%c",word[1]);
       word[0]=toupper(word[0]);       
    }
    printf("%s\n",word);
    
    
    return 0;
}
    



    

