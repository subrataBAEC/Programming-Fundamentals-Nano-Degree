//all occurances of a char in a string using strchr
//
/*
*/
#include<stdio.h>
#include<string.h>

// driver code
int main(){
    
    char text[100],ch;
    gets(text);
    scanf(" %c",&ch);

    char *cur=text;

    while(cur){
        char *pos=strchr(cur,ch);
       if(pos==NULL) break;
       printf("found at %d\n",pos-text);
       cur=pos+1;//next address
    }
    return 0;
}