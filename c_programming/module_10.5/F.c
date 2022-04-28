#include <stdio.h>
#include <math.h>
 
int main() {
 
    int mag1,mag2,energy=1;
    scanf("%d %d",&mag1,&mag2);

    int diff=mag1-mag2;
    //printf("%d",diff);
    if(diff==0){
        energy=1;
        printf("%d\n",energy);
    }
    else{
        for(int i=1;i<=diff; i++){
               energy=energy*32;
        }
        printf("%d\n",energy);
     
    }    
    return 0;
}