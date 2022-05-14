/*complete
D - Lexicographic Order
*/
#include <stdio.h>
#include <string.h>

int main()
{
	//Declare Variables
    char s[11],t[11];
    scanf("%s %s",&s,&t);
    //printf("%s %s",s,t);
    int res=strcmp(s,t);
    if(res<0){
        printf("Yes\n");
    }
    else if(res>0){
        printf("No\n");
    }
	return 0;
}