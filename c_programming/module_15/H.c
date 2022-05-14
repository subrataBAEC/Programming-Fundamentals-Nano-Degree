/*complete
H
logic:
1. save arr[0] into x
2. replace ith item with i+1
3. replace arr[n-1] with x
4. iterate d times
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    
    int n,d,value; //array length,step number
    scanf("%d %d",&n,&d);
    int arr[n];    

    //input values
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);       

    }
    // //input check
    // for(int i=0; i<n; i++){
    //     printf("%d",arr[i]);     
    // }

    //rotate d times
    for(int j=0; j<d; j++){
        //save arr[0] to replace at last place arr[n]
        int x=arr[0];
        for(int i=0; i<n; i++){
        arr[i]=arr[i+1];
        //printf("%d ",arr[i]);
        //replace last value    
    }
    arr[n-1]=x;// replace the last value with first value
    //printf("\n");
    //rotation check
    // for(int i=0; i<n; i++){
    //     printf("%d ",arr[i]);     
    // }
    //printf("\n");
    }
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);     
    }
   
    return 0;
}

