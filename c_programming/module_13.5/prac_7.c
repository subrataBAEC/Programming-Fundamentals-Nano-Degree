/*7.Write a C program to input elements in array and
search whether an element exists in array or not
Example
Input:
Input size of array: 10
Input elements in array: 10, 12, 20, 25, 13, 10, 9, 40, 60, 5
Output:
Element to search is: 25
Element found at index 3
*/
#include<stdio.h>
#include<string.h>

int main(){

    int n,count=0,element;
    printf("enter array size: ");
    scanf("%d",&n);
    int a[n],freq[n];
    for(int i=0; i<n; i++ ){
        scanf("%d",&a[i]);
        //freq[i]=-1; //confusion
    }
    printf("element to search: ");
    scanf("%d",&element);

    for(int i=0; i<n; i++){
        if(a[i]==element){
            count++;
            printf("%d found at index %d",element,i);
        }
    }
//    if(count!=0){
//        printf("\nyes");
//    }

    return 0;
}
