//codeforces_41A
//complete
// string reverse using library function
//in c
/*logic 

*/
#include <stdio.h>
#include<math.h>
#include<string.h>
 
int main() {
 
    char s1[200],s2[200],s3[200];
    int count=0;
    
    scanf("%s",&s1);
    scanf("%s",&s2);

    //int len=strlen(s1);
    //printf("len %d\n",len);

    // print string s1 for checking
    // for(int i=0; i<len; i++){
    //     printf("%c",s1[i]);
    // }

    //revrse of string 2    
    //printf("%s",strrev(s2));

    int cmp=strcmp(s1,strrev(s2));
    if(cmp==0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }   

    return 0;
}