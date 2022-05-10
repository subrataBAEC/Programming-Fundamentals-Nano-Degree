/*3.
Write a C program to read elements in an array and 
find the maximum of array elements. 
Also find how many times the maximum occurs.
Example Input:
Input elements: 10, 20, 50, 40, 50, 30, 40
Output:
Maximum is 50
Maximum occurs 2 times
*/
#include <stdio.h>
#include <string.h>

int main() {
    
    int max=0,count=0,n;
    printf("enter how many elements: ");
    scanf("%d",&n);
    int a[n];    
    //array input
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    //find max value
    for(int i=0; i<n; i++){
        if(a[i]>max){
            max=a[i];
            printf("%d max-- %d\n",i,max);
        }
    }
    //find freq of max value
    for(int i=0; i<n; i++){
        if(a[i]==max){
            count++;
        }
    }

    printf("max %d occures %d times",max,count);

    return 0;
}