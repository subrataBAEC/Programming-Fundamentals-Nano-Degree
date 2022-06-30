/*
return multiple value using struct.
we can use struct to return multiple 
values instead of pointer.
*/

#include <stdio.h>

struct Result{
    int vagfol;
    int vagshesh;
};

struct Result divide(int a,int b){
    struct Result ans;
    ans.vagfol=a/b;
    ans.vagshesh=a%b;
    return ans;
}
int main()
{
    int a=10, b=3;
    //divide function returns struct Result type value to variable res
    struct Result res=divide(a,b);
    printf("%d %d",res.vagfol,res.vagshesh);


    return 0;
}