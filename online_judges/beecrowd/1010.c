#include <stdio.h>
 
int main() {
 
    //char name[30];
    int code_1,num_pro_1,code_2,num_pro_2;
    float price_unit_1,price_unit_2,total;
         
    scanf("%d %d %f",&code_1,&num_pro_1,&price_unit_1);
    scanf("%d %d %f",&code_2,&num_pro_2,&price_unit_2);

    total=num_pro_1*price_unit_1+num_pro_2*price_unit_2;
    printf("VALOR A PAGAR: R$ %0.2f\n",total);

 
    return 0;
}