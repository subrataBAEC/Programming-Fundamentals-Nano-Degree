#include<stdio.h>
#include<string.h>
//binary to integer/decimal(method 1)

unsigned int binaryToInt(char str[]){

    int len=strlen(str);
    unsigned int ans=0;

    for(int i=len-1, p2=1; i>=0; i--, p2=p2*2){
        int bit=str[i]-'0';

        printf("%d %d %d\n",i,p2,bit);//index,2 power,bit
        if(bit==1){
            ans=ans+p2;//bin to dec
        }
    }
    return ans;
}


int main(){
    int res=binaryToInt("1010");
    printf("decimal %d",res);



    return 0;
}
