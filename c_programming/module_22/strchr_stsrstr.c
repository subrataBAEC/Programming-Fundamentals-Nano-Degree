//strstr, strchr into
//find index of a substring
/*
*/
#include<stdio.h>
#include<string.h>

// driver code
int main(){
    // char str[]="hello";
    // printf("%s\n",str);// prints from a[0]
    // printf("%s\n",str+1);// prints from a[1]
    
    //find substring
    char text[100],pattern[100],ch;
    gets(text);
    gets(pattern);
    scanf(" %c",ch);

    char *pos=strstr(text,pattern);
    int len=strlen(text);

    for(int i=0; i<len; i++){
        printf("%i %c %lld\n",i,text[i],&text[i]);
    }

    if(pos==NULL){
        printf("not found\n");
    }
    else{
        printf("address of substring and start of text %lld %lld\n",pos,text);
        printf("found at %lld\n",pos-text);
    }
    return 0;
}
//function
