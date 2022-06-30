/* complete
Q 3
*/
#include <stdio.h>

struct arrayHolder{
    int array[100];
};

struct arrayHolder arraySum(int n,int a[],int b[]){
    struct arrayHolder sum;
    for(int i=0; i<n; i++){
        sum.array[i]=a[i]+b[i];
    }
    return sum;   

}

int main(){

    int a[100]={1,2,3};
    int b[100]={4,5,6};

    int n=3; 

    struct arrayHolder ans;
    ans=arraySum(n,a,b);
     
    for(int i=0; i<n; i++){
        printf("%d ",ans.array[i]); 
    } 
}