//B - Bit++ 
//CodeForces - 282A 


#include <stdio.h> //B
#include<string.h>

int main() {
    char s[4];     //string decleare
    int X=0,n;
    scanf("%d",&n);   
    for(int i= 1; i <= n; i++){
        scanf("%s",s);
        if(s[1]=='+'){
            X++;
        }  
        else {
            X--;
        }
    }
        printf("%d\n",X);
        return 0;
}