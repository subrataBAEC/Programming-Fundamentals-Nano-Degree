//Write a C program to check whether 
//an alphabet is a vowel or consonant.

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