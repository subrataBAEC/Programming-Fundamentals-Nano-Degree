/* complete
Q 7
*/
#include<stdio.h>
#include<string.h>

void ToBinary(unsigned int val,char str[]){
    int i=0;
    while(val>0){
            int digit=val%2;
            val=val/2;
            //printf("%d",d);
            str[i]='0'+ digit;// int to char
            i++;
    }
    str[i]='\0';//end of string
    
    //printf("idx %d\n",idx);
    //before reverse
    // for(int i=0; i<idx; i++){
    //     printf("%c",str[i]);
    // }
    //reverse
    int j=0;
    char temp;
    while(j<i-1){
        temp=str[j];
        str[j]=str[i-1];
        str[i-1]=temp;
        j++;
        i--;
    }
}

int main(){
    char str[100];
    unsigned int v=23;//max 255//8 bit binary
    ToBinary(v,str);
    printf("binary %s\n",str);
    return 0;
}
