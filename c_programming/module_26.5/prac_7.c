/*complete
practice 7
7.	Write a C program count total number of ones (1s) and zeros (0s) in given int variable.
*/

#include<stdio.h>
#include<string.h>

void ToBinary(unsigned int val,char str[]){
    int idx=0;
    while(val>0){
            int d=val%2;
            val=val/2;
            //printf("%d",d);
            str[idx]='0'+ d;// int to char
            idx++;
    }
    str[idx]='\0';
    
    //printf("idx %d\n",idx);
    //before reverse
    for(int i=0; i<idx; i++){
        printf("%c",str[i]);
    }
    //reverse
    int j=0;
    char temp;
    while(j<idx-1){
        temp=str[j];
        str[j]=str[idx-1];
        str[idx-1]=temp;
        j++;
        idx--;
    }
}

int main(){
    char str[100];
    unsigned int v=255;
    ToBinary(v,str);
    printf("\nfinal %s\n",str);
    int len=strlen(str);
    int count=0;

    for(int i=0; i<len; i++){
        if(str[i]=='1') count++;
    }
    printf("number of 1's is %d",count);


    return 0;
}
