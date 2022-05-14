/*complete
C - Next Round
logic:
1.find the kth score,
2.itereate from first to last
3.whose score is equal or greater than kth score, will pass
4. sum the number of passes satudents
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int n,k,count=0;
    scanf("%d %d",&n,&k);
    int score[n];

    for(int i=1; i<=n; i++){
        scanf("%d",&score[i]);
    }
    int target=score[k];
    
    for(int i=1; i<=n; i++){
               
        if(score[i]>=target && score[i]>0){
            count++;   
            //printf("%d %d %d\n",i,score[i],count); //check which scores passes     
        }
    }
    printf("%d\n",count);
	
	return 0;
}
