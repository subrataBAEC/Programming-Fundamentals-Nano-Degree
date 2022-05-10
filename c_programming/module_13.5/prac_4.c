/*4.
Write a C program to find the second largest element in an array. 
Example
Input:
Input array elements: -7 2 3 8 6 6 75 38 3 2
Output
Second largest = 38
*/
#include <stdio.h>
#include <string.h>

int main() {
    
    int max=0,count=0,n,temp;
    printf("enter how many elements: ");
    scanf("%d",&n);
    int a[n];   
    //array input
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    //array sorting
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[j]>a[i]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    //print descending order array
    printf("descending order: ");
    for(int i=0; i<n; i++){
        printf("%d ",a[i]);
    }
    //second largest element
    for(int i=0; i<n; i++){
        if(a[i]>a[i+1]){
            printf("\nsecond largest element %d",a[i+1]);
            break;
        }
    } 
    return 0;
}