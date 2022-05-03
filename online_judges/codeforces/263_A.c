//codeforces_263_A
//complete
//in c
/*logic 

*/
#include <stdio.h>
#include<math.h>
 
int main() {
 
    int x[5][5],r,c;
 
    // scanf("%d",&n);
    
    for(int row=1; row<=5 ;row++){
        for(int col=1;col<=5; col++){
            scanf("%d",&x[row][col]);
            if(x[row][col]==1){
                r=abs(3-row);
                c=abs(3-col);
            }
        }
    }
    printf("%d",r+c);        
    return 0;
}
    



    

