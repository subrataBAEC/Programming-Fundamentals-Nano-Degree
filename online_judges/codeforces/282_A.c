//codeforces_282_A
//complete
//in c
/*logic 

*/
#include <stdio.h>
#include<math.h>
 
int main() {
 
    int n,sum=0;
    char a,b,c;
    
    scanf("%d",&n);
    
    for(int i=1; i<=n ;i++){
        scanf(" %c%c%c",&a,&b,&c);//use space before %c
        
        if( (a=='+'&& b=='+')||(c=='+') ){
        sum=sum+1;
        }
        
        if( (a=='-'&& b=='-')||(c=='-') ){
        sum=sum-1;
        }
    }
      printf("%d\n",sum);
      return 0;
}
    



    

