//codeforces_281_A
//complete
//in c
/*logic 

*/
#include <stdio.h>
#include<ctype.h>
 
int main() {
 
    char s[1000];
    scanf("%s",s);//input until newline
 
    if(islower(s[0])){
        s[0]=s[0]-32;
    }
    printf("%s\n",s);    
    return 0;
}
    



    

