//DMA

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main() {
    int n;
    printf("students: ");
    scanf("%d",&n);

    //DMA
    double *a=(double*) malloc(n*sizeof(double)); //8n memory
    // double a[n];
    for(int i=0; i<n; i++){
        scanf("%lf",&a[i]);
    }

    double sum;
    for(int i=0; i<n; i++){
        sum=sum+a[i];
    }
    printf("%lf",sum);



    return 0;
}
// int makeSquare(int n,int ans[]){
//     for(int i=0; i<n; i++){
//         ans[i]=(i+1)*(i+1);
//     }
//     return ans;
// }
