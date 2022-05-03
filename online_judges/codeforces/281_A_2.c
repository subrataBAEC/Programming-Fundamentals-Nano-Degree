//codeforces_228A
//in c++
#include <iostream>
 
int main() {
 
    int s[4],count=0,temp;
    //scanf("%d %d %d %d",&a,&b,&c,&d);

    for(int i=1; i<=4 ;i++){
        scanf("%d",&s[i]);
    }
    //sorting 
    sort(s,s[4]);
    //check sorting
    for(int i=1; i<=4 ;i++){
        printf("%d ",s[i]);
    }
    printf("\n");

    //check duplicate elements
    for(int i=1; i<=3 ;i++){    //limit is n-1
        if(s[i]==s[i+1]){
            //printf("%d %d\n",s[i],s[i+1]); //du[licate elements]
            count++;
            //printf("%d\n",count);
        }       
    }
    printf("%d\n",count);
    return 0;
}