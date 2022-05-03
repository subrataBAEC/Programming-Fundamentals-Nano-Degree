//codeforces_231/A/team
#include <stdio.h>
 
int main() {
 
    int n,a,b,c,count=0;
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        scanf("%d %d %d",&a,&b,&c);
        if(a==1 && b==1 && c==1){
            count++;
        }
        if(a==1 && b==1 && c==0){
            count++;
        }
        if(a==0 && b==1 && c==1){
            count++;
        }
        if(a==1 && b==0 && c==1){
            count++;
        }
    }
    printf("%d\n",count); 
    return 0;
}