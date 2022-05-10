/*6.Write a C program to find the distinct values and their frequency in an array.
Each value should be printed only once. The values in the array are between 0 and 100.
Example Input
Input elements: 10, 20, 50, 40, 50, 10, 40
Output:
There are five distinct values.
10 occurs 2 times.
20 occurs 1 times.
40 occurs 2 times.
50 occurs 2 times.
*/
#include<stdio.h>
#include<string.h>

int main(){

    int n,count;
    printf("enter array size: ");
    scanf("%d",&n);
    int a[n],freq[n];
    for(int i=0; i<n; i++ ){
        scanf("%d",&a[i]);
        freq[i]=-1; //confusion
    }
    for(int i=0; i<n; i++){
        count=1;
        for(int j=i+1; j<n; j++){
            if(a[i]==a[j]){
                count++;
                freq[j]=0; //confusion
            }
        }
        if(freq[i]!=0){  //confusion
            freq[i]=count;
        }
    }
    for(int i=0; i<n; i++ ){
        if(freq[i]!=0){
            printf("%d occurs %d times\n",a[i],freq[i]);
        }
    }
    return 0;
}
