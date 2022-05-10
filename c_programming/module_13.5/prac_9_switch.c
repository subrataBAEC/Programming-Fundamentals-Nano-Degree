/*9.Write a C program to find total number of vowels and
consonants in a string using switch case in C programming.
Logic to count
number of vowels and consonants in a string.
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
    char s[]="I love Codeforwin!";
    int len=strlen(s);
    printf("%d\n",len);
    //count vowel and consonant using switch-case
    for(int i=0; i<len; i++){
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
                switch(s[i]){
                    case 'a':
                    case 'e':
                    case 'i':
                    case 'o':
                    case 'u':
                    case 'A':
                    case 'E':
                    case 'I':
                    case 'O':
                    case 'U':
                        vowel++;
                        break;
                    default:
                        consonent++;
            }
        }
    }
    printf("vowel: %d \nconsonent: %d",vowel,consonent);
    return 0;
}
