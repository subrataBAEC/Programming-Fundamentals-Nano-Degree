//beecrowd 1168

#include<stdio.h>
#include<string.h>

int main() {
    int n;
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        int led=0;
        char str[100000];
        scanf("%s",str);
        int len=strlen(str);
        for(int i=0; i<len; i++){
            if(str[i]=='1') led=led+2;
            if(str[i]=='2') led=led+5;
            if(str[i]=='3') led=led+5;
            if(str[i]=='4') led=led+4;
            if(str[i]=='5') led=led+5;
            if(str[i]=='6') led=led+6;
            if(str[i]=='7') led=led+3;
            if(str[i]=='8') led=led+7;
            if(str[i]=='9') led=led+6;
            if(str[i]=='0') led=led+6;            
        }
        printf("%d leds\n",led);

    }
    
   //printf("\n");

    return 0;
}
