/* question 03
Implement the makeStrCopy function. Remember that, 
It takes a string in copies to an output string out. 
The signature should be 

void makeStrCopy(char in[], char out[]). 

For example - if in = “hello”, after calling makeStrCopy, out should also be “hello”
*/
#include<stdio.h>
#include<string.h>

//function
void makeStrCopy(char in[], char out[]) {

    //copies "in" string to "out" string
    strcpy(out,in);

    // //another method
    // int sz=strlen(in);
    // printf("%d",sz);
    // for(int i=0; i<sz; i++){
    //     out[i]=in[i];
    // }
    // out[sz]='\0';
    
}
// driver code
int main(){
    char in[100]="hello tesla";
    char out[100];

    makeStrCopy(in,out);
    printf("out= %s",out);
    
   return 0;
}

