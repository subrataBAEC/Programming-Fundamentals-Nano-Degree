#include <stdio.h>
#include <math.h>
 
int main() {
 
   
    float n;
    scanf("%f",&n);
    
    int dec=(int)n;
    //printf("%d",dec);
    int rest=(n-dec)*1000;
   //rest=rest*-1;
    //printf("\n%d",rest);
    // printf("\n%f",n);
    
    if(rest>=500){
        int result=ceil(n);
        printf("%d\n",result);        
    }
    else{
        int result=floor(n);
        printf("%d\n",result);  
    }


    return 0;
}