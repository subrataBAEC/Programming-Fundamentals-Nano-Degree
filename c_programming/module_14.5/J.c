/*complete
J - Amusing Joke
logic:
add string 1 and 2,sort,sort 3rd,then compare
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char guest[210];
    char host[101];
    char pile[100],temp;
    
    scanf("%s%s%s",&guest,&host,&pile);
    // int len1=strlen(guest);
    // int len2=strlen(host);
    // int len3=strlen(pile);
    //printf("length before concate g-%d h-%d p-%d\n",len1,len2,len3);

    // concate or join guest and host
    // guest=guest+host
    strcat(guest,host); //strcat(str1, str2);
    //printf("after concat %s\n",guest);
    int len_guest = strlen(guest);    //lenth after join
    int len_pile = strlen(pile);
    //printf("length %d %d\n",len_guest,len_pile);

    //sorting guest
    for(int i=0; i<len_guest-1; i++){
        for(int j=i+1; j<len_guest; j++){
            if(guest[i] > guest[j]){
                temp=guest[i];
                guest[i]=guest[j];
                guest[j]=temp;
            }        
        }
    }
    //printf("sorted guest : %s\n", guest);

    //sorting pile
    for(int i=0; i<len_pile-1; i++){
        for(int j=i+1; j<len_pile; j++){
            if(pile[i] > pile[j]){
                temp=pile[i];
                pile[i]=pile[j];
                pile[j]=temp;
            } 
        }
    }
    //printf("sorted pile : %s\n", pile);
    if(strcmp(guest,pile)==0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}
