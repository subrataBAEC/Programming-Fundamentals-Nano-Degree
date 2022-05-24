//find a number is prime or  not
//flag default is 1, if divides by any number flag=0
#include<stdio.h>
int main() {
    int num,flag;
    int n;
    scanf("%d",&n);   
    for(int i=1; i<=n ;i++){
        flag=1;
        scanf("%d",&num);
    //0 and 1 are not prime number 
    if(num==0 || num== 1){
        flag=0;
    }
    // devide num by 2 to num/2
    for(int i=2;i<=(num/2); i++){
        if(num%i==0){
            flag=0;
            break;
        }
    }
    if(flag==0){
        printf("%d nao eh primo\n",num);
    }
    else{
        printf("%d eh primo\n",num);
    }
    
    }
    
    return 0;
}
