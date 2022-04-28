//F - Wrong Subtraction 
//CodeForces - 977A 

#include <stdio.h> //D

int main() {
   int num,k;
   int res;
   
   scanf("%d %d",&num,&k);
   if(num<10){
       for(int i=1; i<=k; i++){
           num=num-1;
       }
       if(num>=0){
           printf("%d\n",num);
       }       
   }
   else{
       for(int i=1; i<=k; i++){
           if(num%10==0){
               num=num/10;
               }
            else{
                num=num-1;
            }
       }
        printf("%d\n",num);
   }
   
   return 0;// 1000000000
}