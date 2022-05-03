//codeforces_734_A
//complete
//in c
/*logic 


*/
#include <stdio.h>
#include<ctype.h>
#include<string.h>
 
int main() {
 
    int n,an=0,dk=0;
    char s_1;
    scanf("%d",&n);

    for(int i=0; i<n; i++){        
    scanf(" %c",&s_1);//dont forget the space

    if (s_1=='A') an++;
    else if(s_1=='D') dk++; 
    //printf("%d %d\n",an,dk);
    }

    if(an>dk) printf("Anton\n");
    else if(an<dk) printf("Danik\n");
    else  printf("Friendship\n");    
    return 0;
}
    



    

