//H - Bear and Big Brother 
//CodeForces - 791A 


#include <stdio.h> //limak and bob

int main() {
   int lim,bob,year=0;   
   scanf("%d %d",&lim,&bob);

   for(int i=1; ;i++){
       lim=lim*3; //12
       bob=bob*2; //14
       year++; //1
       if(lim>bob){
           break;
       }       
   }
   printf("%d\n",year);
   return 0;// 1000000000
}