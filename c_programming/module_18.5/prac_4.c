/*complete
4.The function sort(int *a, int *b) sorts the variables a, b by their value. 
If a is smaller, the function does nothing, otherwise it swaps them. Implement the function.
*/
#include<stdio.h>
#include<string.h>

//prototype
//int printCall();

// driver code
int main(){
    int a, b;
    int *pa,*pb;
 
    printf("enter a,b: ");
    scanf("%d %d",&a,&b);
    pa=&a;
    pb=&b;
//for checking of pointers
    printf("address of a, b: %lld,%lld\n",pa,pb); //address of a,b
    printf("value of a, b:%lld, %lld\n",*pa,*pb); //value of a,b ; *pa==a

// //call function
    sort(&a, &b);
    printf("sorted: %d %d",a,b);
    
}
// function definition
    void sort(int* a, int* b){
         //printf("%d %d",*a,*b);
        if(*a>*b){
            int temp=*a;
            *a=*b;
            *b=temp;
        }
        // else{
        //     a=a;
        //     b=b
        // }
    }
