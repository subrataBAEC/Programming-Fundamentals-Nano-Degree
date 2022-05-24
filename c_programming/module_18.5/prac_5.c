/*complete
5.sort three integers a, b, c by their value. 
*/
#include<stdio.h>
#include<string.h>

//prototype
//int printCall();

// driver code
int main(){
    int a, b, c;
    int *pa,*pb,*pc;
 
    printf("enter a,b,c: ");
    scanf("%d %d %d",&a,&b,&c);
    pa=&a;
    pb=&b;
    pc=&c;
//for checking of pointers
    printf("address of a, b: %lld,%lld %lld\n",pa,pb,pc); //address of a,b,c
    printf("a, b, c :%lld %lld %lld\n",*pa,*pb,*pc); //value of a,b,c ; *pa==a

// //call function

    if(*pa>*pb)     sort(&a, &b);
    if(*pb>*pc)     sort(&b, &c);
    if(*pa>*pb)     sort(&a, &b);
    printf("sorted: %d %d %d",a,b,c);
    
}
// function definition
    void sort(int* a, int* b){ //same as int a, int b
         //printf("%d %d",*a,*b);
        if(*a>*b){
            int temp=*a;
            *a=*b;
            *b=temp;
        }
  
    }
