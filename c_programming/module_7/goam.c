// # Goam, a magician gives you a magic number, and you must count up to that number, starting at 11, saying “Abracadabra” each time. You will understand more if you look at the sample input output.
// # Input
// # Input consists of a single integer N

// # Sample 1
// # Input
// # 5
// # Output
// # 1 Abracadabra
// # 2 Abracadabra
// # 3 Abracadabra
// # 4 Abracadabra
// # 5 Abracadabra

#include<stdio.h>// header file


int main() {	
	int n;		
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d Abracadabra\n",i);    
    }
	return 0;
}