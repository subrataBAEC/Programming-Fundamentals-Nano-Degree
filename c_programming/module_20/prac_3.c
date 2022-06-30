//prac_C
//codeforces 1343B
//complete
/*

*/

#include<stdio.h>
#include<string.h>



int main() {
    int t;
    scanf("%d",&t);
    int n; //array size
    

    for(int k=0; k<t; k++){
        int sum1=0,sum2=1,count1=0,count2=0;        
        
        scanf("%d",&n);
        int arr1[n/2]; //left array
        int arr2[n/2]; //right

        if((n/2)%2!=0){
            printf("NO\n");
        }
        else{
            printf("YES\n");
            for(int i=1; i<=(n/2); i++){
                sum1=sum1+2;
                arr1[i]=sum1;
                //printf("%d ",arr1[i]);
                count1=count1+arr1[i];
            }
            for(int i=1; i<=(n/2); i++){
                arr2[i]=sum2;
                sum2=sum2+2;            
            // printf("%d ",arr2[i]);
                count2=count2+arr2[i];
            }
            int diff=count1-count2;
            //printf("%d\n",diff);
            for(int i=1; i<=(n/2); i++){
                    printf("%d ",arr1[i]);
                    
                }
            //int sz2=sizeof(arr2/arr2[0]);
            for(int i=1; i<=(n/2); i++){
                    if(i==(n/2)) {
                        arr2[i]=arr2[i]+diff;
                    }                
                    printf("%d ",arr2[i]);                
                }
        }
        // printf("\n%d ",count1);
        // printf("%d ",count2);

}

    return 0;
}

    


