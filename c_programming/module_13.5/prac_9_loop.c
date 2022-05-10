/*9_1.Write a C program to find total number of vowels and
consonants in a string using loop and if else.

Example
Input:
Input string: I love Philtron.
Output:
Total Vowels = 5
Total Consonants = 8

*/
#include<stdio.h>
#include<string.h>

int main(){

    int vowel=0,consonent=0;
    char s[]="I love Phitron.";
    int len=strlen(s);
    printf("%d\n",len);
    //count vowel and consonant using loop
    for(int i=0; i<len; i++){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') ) { //ensure if alphabet

            if(s[i] =='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ||
               s[i] =='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' ){
                   vowel++;
               }
            else{
                consonent++;
            }
        }
    }
    printf("vowel: %d \nconsonent: %d",vowel,consonent);



    return 0;
}
