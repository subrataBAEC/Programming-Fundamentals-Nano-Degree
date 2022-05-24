/* complete
8.stringCat(char a[], char b[], char out[]) The strcat function takes two strings and 
contacts them and outputs them to a out. 
Assume that out has enough space to hold contents of both a and b. 
Implement the function.
*/
#include<stdio.h>
#include<string.h>

// function definition    
void stringCat(char a[], char b[], char out[]){
    
    int len1=strlen(a);
    int len2=strlen(b);
    for(int i =0; i<=len2; i++){
        a[len1+i]=b[i];
   }
   for(int i =0; i<=(len1+len2); i++){
        out[i]=a[i];
   }
}

// driver code
int main(){

   char a[100]="bangla";
   char b[100]="desh";
   char out[1000];

   stringCat(a,b,out);
   printf("%s\n",out); 
   return 0;
}

        

