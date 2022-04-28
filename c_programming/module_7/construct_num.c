// Problem Statement
// You will be given three numbers AA, BB and CC respectively. Determine whether you can construct a sequence 575 by using each of the phrases once, in any order.

// Sample 1
// Inputcopy	Outputcopy
// 5 5 7
// YES
// Using three numbers 55, 55 and 77, it is possible to construct 575575.

// Sample 2
// Inputcopy	Outputcopy
// 7 7 5
// NO

#include<stdio.h> //575   575,557,755


int main() {	
    
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    if(a==5 && b==7 && c==5)  {
        printf("YES\n");
    }
    else if(a==5 && b==5 && c==7)  {
        printf("YES\n");
    }
    else if(a==7 && b==5 && c==5)  {
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    
    return 0;
}