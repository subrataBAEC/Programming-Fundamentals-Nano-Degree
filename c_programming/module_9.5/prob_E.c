//E - Add Sub Mul 
//AtCoder - abc098_a 

#include <stdio.h> //E

int main() {
   int a,b;
   int sum,sub,mul;
   
   scanf("%d %d",&a,&b);

   sum=a+b;
   sub=a-b;
   mul=a*b;
   if(sum>=sub && sum>=mul){
       printf("%d\n",sum);
   }
   else if(sub>=sum && sub>=mul){
       printf("%d\n",sub);
   }
   else if(mul>=sum && mul>=sub){
       printf("%d\n",mul);
   }  
   return 0;
}