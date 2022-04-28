// Ireland’s winters can be very bad. The temperatures sometimes dip to uncomfortable levels. Weather Service wants to find out exactly how bad the winter was. More specifically, they are interested in knowing the total number of days in which the temperature was below zero degree Celsius.

// Input
// The input is composed of two lines. The first line contains a single positive integer nn (1 \le n \le 1001≤n≤100) that specifies the number of temperatures collected by the Weather Service. The second line contains nn temperatures, each separated by a single space. Each temperature is represented by an integer tt (-1\, 000\, 000 \le t \le 1\, 000\, 000−1000000≤t≤1000000)

// Output
// You must print a single integer: the number of temperatures strictly less than zero.

// Sample 1
// Input	
// 3
// 5 -10 15
//Output
// 1
// Sample 2
// Input
// 5
// -14 -5 -39 -5 -7
//Output
// 5


#include<stdio.h>


int main() {	
    
    int n,count=0;
    scanf("%d",&n); // days
    int t[n];// temps
    
    for(int i=1;i<=n;i++){
        scanf("%d",&t[i]);         
        }
    for(int i=1;i<=n;i++){
        if(t[i]<0){
          count++;  
        }      
        }
        printf("%d\n",count);  
    return 0;
}