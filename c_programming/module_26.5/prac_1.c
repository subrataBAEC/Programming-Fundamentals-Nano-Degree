/* complete
practice 1
Write a function minmax(int a, int b)  that will take two integers 
and simultaneously return both their min and their max. 
Use structures to return the values.

*/

#include <stdio.h>

struct math{
    int min;
    int max;
};

struct math minMax(int a,int b){
    struct math res;

    if(a>b)    res.min=a-b;
    else       res.min=b-a;
    res.max=a+b;
    return res;
}

// struct Result divide(int a,int b){
//     struct Result ans;
//     ans.vagfol=a/b;
//     ans.vagshesh=a%b;
//     return ans;
// }
int main()
{
    int a=100, b=13;

    struct math ans;
    
    ans=minMax(a,b);

    printf("min:%d max:%d",ans.min,ans.max);


    // struct Result res=divide(a,b);
    // printf("%d %d",res.vagfol,res.vagshesh);


    return 0;
}