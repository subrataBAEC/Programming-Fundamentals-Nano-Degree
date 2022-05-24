/*
7.Write a function truncate() that takes a string and an integer k, 
and keeps only the first k characters. For example - if s is “abcd”, 
truncate(s, 2) will make s = “ab”

*/
#include<stdio.h>
#include<string.h>

//prototype
    void truncate(char str[],int k);

// driver code
int main(){

   char str[]="abcde";
   int len=strlen(str);
   int k=3; // truncate after two letter

//original string
   printf("original:");
   printf("%s",str);
   
//truncate after k letters
   truncate(str,k);//function call

//string after truncate
    printf("\nafter:");
    printf("%s",str);
    return 0;
}
// function definition    
    void truncate(char str[],int k){
        for(int i=0; i<k; i++){
            str[i]=str[i];
        }
        str[k]='\0';        
    }
