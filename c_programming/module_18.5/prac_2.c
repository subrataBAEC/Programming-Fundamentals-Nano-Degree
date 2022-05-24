/*complete
2.Suppose you have a global variable 'number'. Write three functions -
    set (int v)   	-> updates number to v.
    makedouble()	-> doubles number.
    print()		-> prints the current value of number.
	
Example: 
    set(10);		//v is now 10
    set(5);			//v is now 5
    print();		//prints 5
    makedouble();	//v is now 10
    makedouble();	//v is now 20
    print();		//prints 20

*/
#include<stdio.h>
#include<string.h>

//prototype
//int printCall();

//global variable
int x;//defalut value =0

// driver code
int main(){
    printf("originaly x=%d\n",x);
    set(10);
    printf("x is now %d\n",x);
    set(5);
    printf("x is now %d\n",x);
    makeDouble();
    printf("x is now %d\n",x);
    makeDouble();
    printf("x is now %d\n",x);   
}
// function definition
int set(int n){
    x=n;
    return x;
}
int makeDouble(){
    x=x*2;
    return x;
}

