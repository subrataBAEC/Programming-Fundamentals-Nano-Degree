/* question 07
//complete
implement the is_reverese_sorted() function to check if an array 
reverse sorted. For example if a = {6, 4, 3, 1}. 
Then is_reverse_sorted should return True

*/
#include<stdio.h>
#include<stdbool.h>

bool is_reverese_sorted(int sz,int a[]){
    int flag=0;
    for(int i=0; i<sz-1; i++){        

        if(a[i]<=a[i+1]){
            flag=1;//not reverse sort
        }
        //printf("%d %d %d %d %d\n",i,i+1,a[i],a[i+1],flag);
    }
    if(flag!=0) return false;
    else return true;
}

// driver code
int main(){
    int a[4]={6, 4, 3, 1};
    int sz=sizeof(a)/sizeof(a[0]);

    int res=is_reverese_sorted(sz,a);
    if(res==true) printf("reverse sorted");
    else if(res==false) printf("not reverse sorted");
    return 0;
}

