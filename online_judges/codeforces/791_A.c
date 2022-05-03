//codeforces_791_A
//complete
//in c
/*logic 


*/
#include <stdio.h>

 
int main() {
 
    int l,b,count=0;
    scanf("%d %d",&l,&b);

    for(int i=1; ;i++){
        l=l*3;
        b=b*2;
        count++;
        if(l>b){
            break;
        }
    }
    printf("%d\n",count);
    
    return 0;
}
    



    

