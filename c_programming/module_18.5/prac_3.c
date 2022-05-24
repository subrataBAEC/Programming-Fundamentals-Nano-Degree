/*complete
3.Write a C function that takes an integer and reverses its digits. 
The function should have the signature void reverse(int* ).
*/
#include<stdio.h>
#include<string.h>

//prototype
//int printCall();

// driver code
int main(){
    int num;
    int *pnum;
 
    printf("enter a number to reverse: ");
    scanf("%d",&num);
    pnum=&num;
//for checking of pointers
    printf("address of num: %lld\n",pnum); //address of num
    printf("value of num:%lld\n",*pnum); //value of num, *pnum==num
//call function
    reverse(&num);
    //printf("\nreverse: %d",num);
    
}
// function definition
    void reverse(int* num){
         int rev=0;

        while(*num!=0){           
            int digit=*num%10;
            *num=*num/10;
            rev=rev*10+digit;
        }
        printf("%d",rev);
    }
