//beecrowd 1160

#include<stdio.h>
int main() {
    int n,year;
    long long int pA,pB,total_A,total_B;
    double rA,rB;
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        year=0;
        scanf("%lld %lld %lf %lf",&pA,&pB,&rA,&rB);
        // total_A=pA;
        // total_B=pB;
        while(pA<=pB){

            pA=pA+((pA*rA)/100);
            pB=pB+((pB*rB)/100);
            // printf("%lld ",pB);
            // printf("%lld ",pB);
            year++;
            //printf("%d\n",year);
            if(year>100) {
                printf("Mais de 1 seculo.\n");
                break;
            }     
        } 
        if(year<=100){
                printf("%d anos.\n",year);    
        }  
        
    }  
    
   
   //printf("\n");

    return 0;
}
