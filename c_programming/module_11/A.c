//complete
#include <stdio.h>
#include <math.h>

 
int main() { 
     
    int people,gifts,pos;//n,k,a
    scanf("%d %d %d",&people,&gifts,&pos);

   while(gifts!=0){          
       if(pos==people){
           pos=1;
       }
       else{
           pos=pos+1;
       }
        gifts--;  
    if(gifts==1){
            break;
        }
        
       //printf("%d %d\n",pos,gifts);
   }
  printf("%d\n",pos);
      

    return 0;
}