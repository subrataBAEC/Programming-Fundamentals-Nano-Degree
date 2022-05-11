//atcoder digit machine
//input:9 0 1 2 3 4 5 6 7 8
//output: 7
/* logic:
pos: 0 1 2 3 4 5 6 7 8 9
num: 9 0 1 2 3 4 5 6 7 8
The number on the screen transitions as 0-9-8-7.
*/

#include <stdio.h>
#include <string.h>
int main(){

    int to[10];//9+1 for null
    //array input
    for(int i=0; i<10; i++){
        scanf("%d",&to[i]);
    }
    int current=0;

    for(int i=0; i<3; i++){ //pressing 3 times
        current=to[current];//  9 = to[0], 8= to[9], 7= to[8]
        //printf("%d\n",current);
    }
    printf("%d\n",current);


    return 0;
}
