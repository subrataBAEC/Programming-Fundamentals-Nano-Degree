//codeforces_112_A
//complete
//in c
/*logic 


*/
#include <stdio.h>
#include<ctype.h>
#include<string.h>
 
int main() {
 
    char s_1[100],s_2[100];

    scanf("%s",s_1);//input until newline
    scanf("%s",s_2);
    int len_s1=strlen(s_1);
    int len_s2=strlen(s_2);

    //both convert to upper
    for(int i=0; i<len_s1; i++){
        if(islower(s_1[i])) {
            s_1[i]=s_1[i]-32;
        }
    }
    for(int i=0; i<len_s2; i++){
        if(islower(s_2[i])) {
            s_2[i]=s_2[i]-32;
        }
    }
    // printf("%s",s_1); //check upper
    // printf("%s",s_2);
    //comparison
    int cmp=strcmp(s_1,s_2);
 
    if(cmp==0)    printf("0\n");
    else if(cmp>0)  printf("1\n");
    else if(cmp<0)  printf("-1\n");
    return 0;
}
    



    

