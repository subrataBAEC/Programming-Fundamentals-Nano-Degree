/*complete
3.Suppose you have a function gcd(a, b) that finds the gcd of two numbers. 
Write a program that takes as input 10 integers and finds their gcd. 
You can assume that the gcd function is implemented.
*/
#include<stdio.h>
#include<string.h>

// function definition    
int gcd(int a,int b){

    while(a!=0){
        int rem=b%a;
        b=a;
        a=rem;        
    }
    return b;
}

// driver code
int main(){
    int sz;
    scanf("%d",&sz);
    int a[sz];
    //input
    printf("eneter numbers: ");
    for(int i=0; i<sz; i++){
        scanf("%d",&a[i]);
    }    
    int result;

    //gcd calculation
    for(int i=0; i<sz-1; i++){
        if(i==0) {
             result=gcd(a[i],a[i+1]);
        }       
        else{
            result=gcd(result,a[i+1]);
        }
    }
    printf("GCD=%d",result);   
   return 0;
}

        

