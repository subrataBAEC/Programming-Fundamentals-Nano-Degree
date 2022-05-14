/*complete
B - Spy Detected!
logic:
1. check 1st and 2nd element(differ),also 2nd and third(similar)
2. if yes, 1st element is the result
3. else---
4. compare all elements with first element
5. which not similar, is the result
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	int t,n;
    scanf("%d",&t);    
    
    for(int i=0; i<t; i++){
        scanf("%d",&n); //array size
            int arr[n]; 
            //array input       
            for(int i=0; i<n; i++){
                scanf("%d",&arr[i]);
            }
            //chech first two values
            if(arr[0]!=arr[1] && arr[1]==arr[2]){
                printf("1\n");
            }
            
            else{
                int x=arr[0];
                for(int i=1; i<n; i++){
                    if(arr[i]!=x){
                        printf("%d\n",i+1);
                        break;
                    }
                }

            }       
    }    
	return 0;
}
