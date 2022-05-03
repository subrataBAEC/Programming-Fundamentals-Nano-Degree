
#include <stdio.h>
#include <math.h>
//careful about space in scanf before %c
//otw space is considered as character
 
int main() {
 
    //int rooms,living,capacity;
    int games,count=0,a=0,d=0;
    char win;
    
    scanf("%d",&games);

    for(int i=1; i<=games; i++){
       
        scanf(" %c",&win);
        
        if(win=='A')    a++;
        if(win=='D')    d++;  
    }
    if(a>d) printf("Anton\n");
    if(d>a) printf("Danik\n");
    if(d==a) printf("Friendship\n");

    //printf("%d %d",a,d);
    //printf("%d\n",count);
    return 0;
}