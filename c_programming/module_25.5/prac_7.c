
//decimal to binary
// convert to k bit binary
//complete

#include<stdio.h>
#include<string.h>

void ToBinary(unsigned int val,char str[],int k){
    int idx=0;
    while(val>0){
            int d=val%2;
            val=val/2;
            //printf("%d",d);
            str[idx]='0'+ d;// char to int
            idx++;
    }
    for(int i=idx; i<k; i++){
        str[i]='0';
        
    }
    str[k]='\0';
    
    printf("idx %d\n",idx);
    //before reverse
    for(int i=0; i<k; i++){
        printf("%c",str[i]);
    }
    
    int j=0;
    char temp;
    idx=k;
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
    unsigned int v=254;
    int k=8;
    ToBinary(v,str,k);
    printf("\nfinal %s\n",str);
    return 0;
}
