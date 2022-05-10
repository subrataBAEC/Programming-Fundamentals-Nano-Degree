/*5.
Write a C program to insert element in array at specified position. 
Example
Input:
Input array elements: 10, 20, 30, 40, 50
Input element to insert: 25
Input position where to insert: 3

Output:
Elements of array are: 10, 20, 25, 30, 40, 50
*/
#include <stdio.h>
#include <string.h>

int main() {
    
    int max=0,count=0,n,temp;
    int element,pos;
    printf("enter how many elements: ");
    scanf("%d",&n);
    int a[n];   
    //array input
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    printf("original array:") ;
    //print array
    for(int i=0; i<n; i++){
        printf("%d ",a[i]);
    }
    //insert element in array
    printf("\nInput element to insert:");
    scanf("%d",&element);
    printf("\nInput position where to insert:");
    scanf("%d",&pos);

    //shift elements from pos to forward and insert
    for(int i=n; i>=pos; i--){
        a[i]=a[i-1];
    }
    a[pos-1]=element;
    n++;
    //after
    printf("\nafter insert array:") ;
    for(int i=0; i<n; i++){
        printf("%d ",a[i]);
    }

   
    return 0;
}