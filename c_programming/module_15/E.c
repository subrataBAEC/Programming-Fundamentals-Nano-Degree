/*complete
E
external link: https://wisdomoverflow.com/2019/04/23/c-program-to-find-pangrams-hackerrank/
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
    int n,flag=0,index;
    scanf("%d",&n);
    char word[n];
    scanf("%s",word);
    int len=strlen(word);
    int letters[26]={0};//zero initially

    for(int i=0; i<n; i++){ // all conver to lower
        word[i]=tolower(word[i]);
    }  
    //printf("%s",word);//check all lower

    for(int i=0; i<len; i++){
        //if lowercase
        if(word[i]>=97){
            index=word[i]-97; //a-97=0, b-97=1, c-97=2...
            //index=word[i]-'a'; also works
            letters[index]++; 
        }
    }
    for(int i=0; i<26; i++){
        if(letters[i]==0) { // a char not present
            flag=1;            
            break;
       }
    }
    if(flag==1) printf("NO\n");    
    else printf("YES\n");
	return 0;
}

