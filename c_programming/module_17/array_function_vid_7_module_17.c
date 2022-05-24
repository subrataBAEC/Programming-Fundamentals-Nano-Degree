// array and function
/*
minimum value of array
value double
array reverse
string reverse>> for string,no need to pass array size
*/

#include<stdio.h>
#include<string.h>

//array minimum
int get_array_min(int n, int a[]){ // n is for array size
    int min=a[0];
    for(int i=0; i<n; i++){
        if(a[i]<min) min=a[i];
    }
    return min;
}
//array vale double
void make_double(int n, int a[0]){
    for(int i=0; i<n; i++){
        a[i]=a[i]*2;
    }
}
//array reverse
void reverse(int n, int a[0]){
    for(int i=0,j=n-1; i<j; i++,j--){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
}
//string reverse
void reverse_str(char str[]){
    int len=strlen(str);
    for(int i=0,j=len-1; i<j;i++,j--){
        int temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
}
// driver code
int main(){
    int a[]={-5,0,1,4,10};
    int sz=sizeof(a)/sizeof(a[0]);
    printf("%d\n",sz);
    //minimum
    int res=get_array_min(sz,a);
    printf("array min %d\n",res);
    //double
    printf("double:");
    make_double(sz,a);//size, array name
    for(int i=0; i<sz; i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    //array reverse
    printf("array reverse:");
    reverse(sz, a);
    for(int i=0; i<sz; i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    //string reverse
    printf("string reverse:");
    char str[]="bangladesh";
    reverse_str(str);
    printf("%s",str);
    return 0;
}
