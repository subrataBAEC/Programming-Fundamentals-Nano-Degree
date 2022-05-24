/*
complete.
6.void makeNArray(int n, int squares[]) 
populates squares with first n square numbers. 
For example, makeNarray(4, squares) will 
populate squares with 1, 4, 9, 16. Implement the function.
*/
#include<stdio.h>
#include<string.h>

// function
void makeNArray(int n, int squares[]){
    for(int i=1; i<=n; i++){
        squares[i]=i*i;
    }
  
}
// driver code
int main(){
    int n;
    scanf("%d",&n);
    int squares[n];  

    makeNArray(n,squares);

    for(int i=1; i<=n; i++){
        printf("%d ",squares[i]);
    }    
    return 0;
}

