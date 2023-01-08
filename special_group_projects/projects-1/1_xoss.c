/*
----------------------
Name:  subrata saha
email: subratabaec@gmail.com
Date: Jan 7, 2023
-----------------------
//pattern print//

Sample Input:
4
Sample Output:

1234
2  4
3  4
4444
*/


//
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    int n;
    scanf("%d",&n);

    for(int i=1; i<=n; i++){

        for(int j=1; j<=n; j++){
            if(i==1){
                printf("%d",j);
            }
            else if(i==n){
                printf("%d",n);
            }
            else if(1<i && i<n && j==1){
                printf("%d", i);
            }

            else if(1<i && i<n && j==n){
                printf("%d", n);
            }
            else if(1<i && i<n && j!=n){
                printf(" ", n);
            }
        }
        printf("\n");
    }
    return 0;
}