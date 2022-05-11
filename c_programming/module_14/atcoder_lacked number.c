//find missing digit
//input:013456789
//output:3

#include <stdio.h>
#include <string.h>
int main(){

    char num[10];//9 char+null
    gets(num);
    int freq[10]={0};//all zero initially
    for(int i=0; i<9; i++){
        //convert to integer
        char c=num[i]; //char 1, 3
        int digit=c-'0'; //digit 1, 3
        freq[digit]++; // freq[1]=1, freq[3]=1, freq[4]=1
    }
    for(int i=0; i<9; i++){
        //printf("%d--%d\n",i,freq[i]);
        if(freq[i]==0){
            printf("%d\n",i);//print missing
        }
    }

    return 0;
}
