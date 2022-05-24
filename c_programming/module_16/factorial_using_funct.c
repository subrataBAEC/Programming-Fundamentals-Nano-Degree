// sum
/*

*/

#include<stdio.h>
#include<string.h>

//prototype
    int sum(int x,int y);

// driver code
int main(){
   int a,b;
   scanf("%d %d",&a,&b);
   int res=sum(a,b);
   printf("%d",res);
   return 0;
}
// function
    int sum(int x,int y){
        int sum=x+y;
        return sum;
    }
