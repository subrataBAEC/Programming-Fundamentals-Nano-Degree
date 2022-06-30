#include<stdio.h>
#include<string.h>
//bitwise operator

void ToBinary(unsigned int val,char str[]){
    int idx=0;
    while(val>0){
            int d=val%2;
            val=val/2;
            //printf("%d",d);
            str[idx]='0'+ d;
            idx++;
    }
    str[idx]='\0';
    printf("idx %d\n",idx);
    //before reverse
    for(int i=0; i<idx; i++){
        printf("%c",str[i]);
    }
    int j=0;
    char temp;
    while(j<idx-1){
        temp=str[j];
        str[j]=str[idx-1];
        str[idx-1]=temp;
        j++;
        idx--;
    }
//    for(int i=0; i<idx; i++){
//        printf("%c\n",str[i]);
//    }

}

int main(){
    unsigned int x=10;
    //unsigned int y=35;

    char sx[100];

    ToBinary(x,sx);
    printf("\nSX=%s\n",sx);
    return 0;
}
