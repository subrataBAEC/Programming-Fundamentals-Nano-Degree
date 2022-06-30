/*complete
practice 2
2. Write a function arraysum(int n, int a[], int b[])  
that will take two arrays of equal length n, 
and find their indexwise sum. 
For example, if a = {2, 3, 4} and b = {1, 2, 3}, 
their index-wise sum would be {3, 5, 7}. Use structures to return the values.
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