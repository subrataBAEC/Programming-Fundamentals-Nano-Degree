/*complete
B
logic:
1.find the max value,
2.diff of items from max valu
3.sum
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    
    int n;
    scanf("%d",&n);
    long int item[n];
    //array size
    for(int i=0; i<n; i++){
        scanf("%ld",&item[i]);        
    }
    //find max value
    long int max=0;
    for(int i=0; i<n; i++){
        if(max<item[i]){
            max=item[i]; //saving max value to item[0]
            printf("%ld\n",max);            
        }
    }
    //printf(" max %ld\n",max);// max value
    int sum=0,diff;
    for(int i=0; i<n; i++){
        diff=max-item[i];
        sum=sum+diff;
        //printf("item %ld diff %d sum %d\n",item[i],diff,sum); 
    }
    printf("%d\n",sum);       
    
    return 0;
}

