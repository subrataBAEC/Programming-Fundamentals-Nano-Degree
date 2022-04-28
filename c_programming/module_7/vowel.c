
// Problem Statement
// Neil is playing with alphabets. There are 26 alphabets in English Language. 5 of them are vowels: a, e, i, o and u.

// As Neil is a kid, he can't tell it clearly. If he gives you an alphabet c, can you tell him whether it is vowel or consonant.
// Constraints

// Output
// If cc is a vowel, print vowel. Otherwise, print consonant.


#include<stdio.h>
#include<ctype.h>

int main() {	
	char character;		
    scanf("%c",&character);
    char c=tolower(character); //convet to lowercase
    
    if(c=='a' || c=='e' ||c=='i' ||c=='o' ||c=='u'){
        printf("vowel\n");
    }
    else{
        printf("consonant\n");
    }   
	return 0;
}