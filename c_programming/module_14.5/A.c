/*complete
//logic :https://www.youtube.com/watch?v=76DOcEpZjok&ab_channel=Code%27sPathshala
A - Presents
logic:

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int n;
    scanf("%d",&n);
    int gift[n];

    for(int i=1; i<=n; i++){
        scanf("%d",&gift[i]);
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==gift[j]){
                printf("%d ",j);
                break;
            }
        }
    }	
	return 0;
}

