/*complete
A
logic:
for lower:
a-97=0, b-97=1, c-97=2...z-97=25
or
a-'a'=0, b-'a'=1...
for upper:
A-65=0, B-65=1, C-65=2....Z-65=25


*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    
    char name[110];
    scanf("%s",name);
    int index,count=0;
    int len=strlen(name);
    int letters[26]={0};//zero initially

    for(int i=0; i<len; i++){
        index=name[i]-'a';
        letters[index]++;
    }
    for(int i=0; i<26; i++){
        //printf("%d",letters[i]);
        if(letters[i]>0){
            count++;
        }
    }
    if(count%2==0) printf("CHAT WITH HER!\n");
    else printf("IGNORE HIM!\n");

    ;
	return 0;
}

