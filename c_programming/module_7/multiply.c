// Hasan knew that you are a programmer. He is now going to test your math knowledge. He will give you N numbers of calculations. In each calculation you will be given two numbers A and B. You need to calculate the multiplication of these two numbers. And after all the calculations you have to tell the total sum of those calculated multiplications. Can you do it?

// Input
// The first line of input contains a single integer NN (1 \leq N \leq 1001≤N≤100), which is the number of calculations you need to do.

// The next NN lines describe two numbers. Each of these lines contains two real numbers AA (0 < A \leq 1000<A≤100), which is the first number, and BB (0 < B \leq 1000<B≤100), which is the second number. All real numbers will be specified to exactly one decimal place.

// Sample 1
// Input
// 5
//Output
// 1.0 12.0
// 0.7 5.2
// 0.9 10.7
// 0.5 20.4
// 0.2 30.0
// 41.470


#include<stdio.h>


int main() {	
    
    int n,count=0;
    double a,b,multiply,sum=0;
    scanf("%d",&n); 
       
    for(int i=1;i<=n;i++){
        scanf("%lf %lf",&a,&b);     
        multiply=a*b;
        sum=multiply+sum;
        //printf("%d",a*b);    
        }    
        printf("%0.3lf\n",sum);  
    return 0;
}