/* question 10
//complete


*/
#include<stdio.h>
#include<string.h>

// driver code
int main(){
    char str[]="helloworld";

    int len=strlen(str);
    for(int i=0; i<len; i++){
        printf("%d %c %lld\n",i, str[i],&str[i]);
    }

    char *pos=strchr(str,'l');
    printf("%s %lld\n",pos,&*pos);

    char *pos1=strstr(str,"l");
    printf("%s %lld\n",pos1,&*pos1);

    char *pos3=strstr(str,"lo");
    printf("%s %lld\n",pos3,&*pos3);

    return 0;
}
