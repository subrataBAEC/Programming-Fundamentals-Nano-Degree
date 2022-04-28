// input zero or one to terminate, otherwise input again (Use do-while loops).
//Example:
// Enter 0/1: 5
// Wrong Input. Try Again.
// 	Enter 0/1: -1
// Wrong Input. Try Again.
// 	Enter 0/1: 0
// You entered 0.

#include<stdio.h>
int main() {
    int num;
    
    do{
       printf("\nenter 0/1: ");
       scanf("%d",&num);  

       if(num==0 || num==1){
          printf("you entered= %d,complete",num);
          break;
       }
       else{
          printf("wrong input,input again");
       }
    }
    while(1);    
    return 0;
}
