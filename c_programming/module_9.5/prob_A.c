//A - twiblr 
//AtCoder - abc182_a 

#include <stdio.h> 


int main() {
   int my_follower,current_follower;//A,B
   int more_follower;
   scanf("%d %d",&my_follower,&current_follower);
   more_follower=(2*my_follower+100)-current_follower;
   printf("%d\n",more_follower);
   return 0;
}