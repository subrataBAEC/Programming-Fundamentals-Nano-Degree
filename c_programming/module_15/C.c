/*complete
C
logic:
1.compare adjacent elements
2.count++ if adjacent elements are same
3.print count
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    
    int n,count=0;
    scanf("%d",&n);
    char color[n];
    scanf("%s",color);    
    int len=strlen(color);

    for(int i=0; i<len; i++){
        if(color[i]==color[i+1] && color[i+1]!='\0'){
            count++;
        }
    }
    printf("%d\n",count);
    
    // for(int i=0; i<n; i++){
    //    printf("%c\n",color[i]);        
    // }
    
    return 0;
}

