
#include <stdio.h>
#include <math.h>

 
int main() {
 
    int rooms,living,capacity;
    int count=0;
    
    scanf("%d",&rooms);
    for(int i=1; i<=rooms; i++){
        scanf("%d %d",&living,&capacity);

        if(capacity-living>=2){  // at least two vacant seats needed        
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}