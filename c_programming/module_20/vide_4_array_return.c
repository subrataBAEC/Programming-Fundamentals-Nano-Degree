//array return from function
// squares of 1 to 5
//send an empty array to get the value from function

#include<stdio.h>
#include<math.h>
int main() {
    int n=5;
    int ans[n];//empty array
    makeSquare(n,ans);

    for(int i=0; i<n; i++){
        printf("%d ",ans[i]);
    }
    return 0;
}
int makeSquare(int n,int ans[]){
    for(int i=0; i<n; i++){
        ans[i]=(i+1)*(i+1);
    }
    return ans;
}



