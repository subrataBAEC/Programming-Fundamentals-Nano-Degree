/*complete
E - Your First Judge
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char s[16];
    char t[20]={"Hello,World!"};
    scanf("%d",&s);
    //printf("%s",t);

    int res=strcmp(s,t);
    if(res==0 ){
        printf("AC\n");
    }
    else{
        printf("WA\n");
    }


    

    
	return 0;
}
