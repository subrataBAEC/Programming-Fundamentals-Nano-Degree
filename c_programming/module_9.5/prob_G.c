//G - Poor 
//AtCoder - abc155_a 

#include <stdio.h> //G

int main() {
   int a,b,c;
   //int res;
   
   scanf("%d %d %d",&a,&b,&c);

   if(a==b && b==c && a==c){
       printf("No\n");
   }
   else if(a!=b && b!=c && a!=c){
       printf("No\n");
   }
   else{
       printf("Yes\n");
   }      
   return 0;// 1000000000
}