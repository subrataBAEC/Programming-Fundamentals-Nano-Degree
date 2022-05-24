// pointer
/* 
1. pointer means address
2. * operator used in two places, one in pointer decleration, anothe one in accessing pointer value
3. pvalue>> %p >> pointer address
4. *pvalue>> %d >>value stored in that address
5. value is same as *pvalue
6. *>> address operator , de-referancing operator
7. *>> address to value
8. & >> value to address
*/
#include <stdio.h>
#include <string.h>
int main(){
    
    int value=100; //integer value
    int *pvalue=&value; // integer pointer, it holds add. of value

    printf("%d\n",value); //prints what's inside value variable
    printf("%p address has value %d\n",pvalue,*pvalue); //pvalue denotes address of value, *pvalue holds value

    value=200; 
    printf("%d\n",value); //200
    printf("%p address has value %d\n",pvalue,*pvalue); //200

    //value == *pavlue
    *pvalue=300; 
    printf("%d\n",value); //300
    printf("%p address has value %d\n",pvalue,*pvalue); //300

    // can we change value(address)of pvalue
    int value2=100;
    pvalue=&value2; // new address to pvalue
    printf("%d\n",value); //300, same as before
    printf("%p address has value %d\n",pvalue,*pvalue); //300

    int v=12;
    int *pv=&v;
    printf("%p address holds %d\n",pv,*pv);

    return 0;
}

