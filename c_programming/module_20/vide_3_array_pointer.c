//array and pointer
//incomplete

#include<stdio.h>
#include<math.h>

int main() {
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    // // access each element address and value
    // for(int i=0; i<10; i++){
    //     int *pai=&a[i];
    //     printf("%lld %d\n",a[i],*a[i]);
    // }
    //array addreess
    // int *pa=a; //& not required for whole array
    // printf("%lld %d\n",pa,*pa);
    
    //a[i] and *(a+i) is same
    printf("%lld %d\n",a,*a);
    printf("%lld %d\n",a+1,*(a+1));
    printf("%d\n",a[1]);

    //one diff between pointer and array
    int sz=sizeof(a);
    int sz1=sizeof(&a[0]);
    printf("%d %d",sz,sz1);

    return 0;
}
