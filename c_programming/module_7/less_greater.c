// Problem Statement
// You are given three integers AA, BB and CC. Determine whether CC is not less than AA and not greater than BB.

// Sample 1
// Inputcopy	Outputcopy
// 1 3 2
// Yes
// C=2C=2 is not less than A=1A=1 and not greater than B=3B=3, and thus the output should be Yes.

// Sample 2
// Inputcopy	Outputcopy
// 6 5 4
// No
// C=4C=4 is less than A=6A=6, and thus the output should be No.

// Sample 3
// Inputcopy	Outputcopy
// 2 2 2
// Yes

#include<stdio.h>

int main() {	
    
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);// c<a, c<=b//code
        
    if(c>=a && c<=b) {
        printf("Yes\n");
    }
    else{
       printf("No\n"); 
    }
    return 0;
}