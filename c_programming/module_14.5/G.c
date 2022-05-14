/*complete
G - Petya and Strings
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	//Declare Variables
    char s[11],t[11];
    scanf("%s %s",&s,&t);
    //printf("%s %s",s,t);
    int len=strlen(s);
    for(int i=0; i<len; i++){
        s[i]=tolower(s[i]);
        t[i]=tolower(t[i]);
    }
    //printf("%s %s",s,t); //check
    int res=strcmp(s,t);
    if(res<0){
        printf("-1\n");
    }
    else if(res>0){
        printf("1\n");
    }
    else if(res==0){
        printf("0\n");
    }

	return 0;
}
