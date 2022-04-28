
#include<stdio.h>


int main() {	
    
    int n,count=0;
    scanf("%d",&n); // days
    int t[n];// temps
    
    for(int i=1;i<=n;i++){
        scanf("%d",&t[i]);         
        }
    for(int i=1;i<=n;i++){
        if(t[i]<0){
          count++;  
        }      
        }
        printf("%d\n",count);  
    return 0;
}