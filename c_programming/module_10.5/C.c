#include <stdio.h>
#include <math.h>

 
int main() {
 
    int pass,std,marks,count=0;
    scanf("%d %d ",&std,&pass);

    for(int i=1; i<=std; i++){
        scanf("%d",&marks);
        if(marks<pass){
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}