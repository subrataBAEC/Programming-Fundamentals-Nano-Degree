/*
return array using struct.

*/

#include <stdio.h>

void   makeNarray(int n,int out[]){
    for(int i=0; i<n; i++){
        out[i]=i+1;
    }
}
int main()
{
    int n=20;
    int a[n];
    makeNarray(n,a);

    for(int i=0; i<n; i++){
        printf("%d ",a[i]);
    }


    return 0;
}