#include<stdio.h>
#include<string.h>
//binary to integer/decimal(method 2)

unsigned int binaryToInt(char str[]){

    int len=strlen(str);
    unsigned int ans=0;

    for(int i=0; i<len ; i++){
        int bit=str[i]-'0';

        printf("%d %d\n",i,bit);//index,bit
             ans=ans*2+bit;//bin to dec
    }
    return ans;
}


int main(){
    int res=binaryToInt("1010101");
    printf("decimal %d",res);



    return 0;
}
