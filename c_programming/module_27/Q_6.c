/*  complete
Q 6
*/
#include<stdio.h>
#include<string.h>

struct numbers{
    int greater;
    int smaller;
};
// compare two unequal numbers
struct numbers compare(int a,int b){
    struct numbers f;
    if(a>b){
        f.greater=a;
        f.smaller=b;
    }
    else if(a<b){
        f.greater=b;
        f.smaller=a;
    }
    return f;

}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);

    struct numbers res;
    res=compare(a,b);
    printf("greater: %d, smaller: %d",res.greater,res.smaller);


}

