/*complete
G
logic:
1.if len<=2
2.print str
3.if len>2
4.print the first chars str[0], then print str[1],str[3]...

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char string[101]; 
    int n;
    scanf("%d",&n);
    

    for(int i=0; i<n; i++){
        //string[i]='\0';         
        scanf("%s",string);
        int len=strlen(string);
        //printf("%d\n",len);
        if(len<=2) printf("%s\n",string);
        else{
            printf("%c",string[0]);
            for(int i=1; i<len; i=i+2){
                //printf("%c",string[i]);
                printf("%c",string[i]);              
            }
            printf("\n");
            
        //}
        //string[i]='\0';   
        }
    }
	return 0;
}

