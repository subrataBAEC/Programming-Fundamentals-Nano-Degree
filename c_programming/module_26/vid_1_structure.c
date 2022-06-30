/*
return an array from struct
*/

#include<stdio.h>
#include<stdlib.h>

int* makeNarray(int n){
    int *out=(int*) malloc(n*sizeof(int));

    for(int i=0; i<n; i++){
            out[i]=i+1;
    }
    return out;
}

// driver code
int main(){
    int n=10;

    int *a=makeNarray(n);

    for(int i=0; i<n; i++){
        printf("%d ",a[i]);
    }

    return 0;
}
