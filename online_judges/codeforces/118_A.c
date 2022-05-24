//codeforces 118
//complete
/*

1. detect vowel and remove them
process:
if detected not a vowel then return zero and that char copied to new string
that is our new string.
2. add a '.' before each consonant

*/

#include<stdio.h>
#include<string.h>

int removeVowel(char ch);

int main() {
    int j=0;
    char ch,str[110],str2[110];
    scanf("%s",str);
    strlwr(str);// covert to lower
    int len=strlen(str);

    for(int i=0; i<len; i++){

        int ret=removeVowel(str[i]);//function call

        if(ret==0){      // not vowel,copy to empty string
           
            str2[j]=str[i];
            j++;
        }
    }
    str2[j]='\0';

    // printf("old %s\n",str);
    // printf("new %s\n",str2);
    int len2=strlen(str2);

    //print with a '.'
    for(int i=0; i<len2; i++){
        printf(".%c",str2[i]);
    }

    return 0;
}
// vowel removing function

int removeVowel(char ch){
        
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='y'|| 
            ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
               return 1;
        }
        else{
            return 0;
        }

}    


