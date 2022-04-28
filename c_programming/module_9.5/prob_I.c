//I - Grading Students
//HackerRank - grading 

#include <stdio.h> //I

int main() {
   int n;   
   scanf("%d",&n);
   int grade;

   for(int i= 0; i < n; i++){
       scanf("%d",&grade);
       
       int num = (grade+4)/5;
       num =num*5;
       if(num>=40 && num-grade<3){
             grade=num;
       }     
       printf("%d\n",grade);
       }
   return 0;
}