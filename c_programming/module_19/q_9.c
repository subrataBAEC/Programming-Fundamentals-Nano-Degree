/*complete
9.Write a program using pointers to read in an array 
of integers and Print its elements in reverse order.
hints: 
1.https://www.youtube.com/watch?v=CYf-rVrKNTI&ab_channel=Technotip
2.https://www.startertutorials.com/blog/c-program-reverse-array-place-using-pointers.html
*/
#include<stdio.h>
#include<string.h>

// driver code
int main(){
    
    int n;
    printf("enter array size:");
    scanf("%d",&n);
    int array[n];
    printf("enter array elements:");
    for(int i=0; i<n; i++){
        scanf("%d",&array[i]);      
    }
    int *parray;
    parray=&array[n-1];// address of last value
   
    //print in reverse
    for(int i=n; i>0; i--){
            printf("%d ",*parray); 
            *parray--;        
        } 
    
}
