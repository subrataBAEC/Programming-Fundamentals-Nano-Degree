//D - Soldier and Bananas 
//CodeForces - 546A 

#include <stdio.h> //D

int main() {
   int k,n,w,sum=0;
   
   scanf("%d %d %d",&k,&n,&w);
   for(int i=1; i<=w; i++){
       int price=i*k;
       sum=sum+price;
   }
   int rest_money=sum-n;
   if(rest_money>=0){
       printf("%d\n",rest_money);
   }
   else{
       printf("0\n");
   }
   

   return 0;
}