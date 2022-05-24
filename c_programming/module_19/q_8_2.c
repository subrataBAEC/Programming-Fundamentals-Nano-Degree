/* complete>> using strcat
8.stringCat(char a[], char b[], char out[]) The strcat function takes two strings and 
contacts them and outputs them to a out. 
Assume that out has enough space to hold contents of both a and b. 
Implement the function.
*/
#include<stdio.h>
#include<string.h>

// function definition    
void stringCat(char a[], char b[], char out[]){
 
    strcat(a,b);//result is in a
    strcat(out,a);
   //  int len=strlen(a);
   //  for(int i =0; i<=len; i++){
   //      out[i]=a[i];
   // }
}
      

// driver code
int main(){

   char a[100]="bangladesh";
   char b[100]=" my country";
   char out[1000]={};

   stringCat(a,b,out);
   printf("%s\n",out); 
   return 0;
}
  

