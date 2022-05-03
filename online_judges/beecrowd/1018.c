#include <stdio.h>
#include <math.h>

 
int main() {
 
    int money,rest,n_100,n_50,n_20,n_10,
    n_5,n_2,n_1;
          
    scanf("%d",&money);
    //100
    n_100=money/100; //5.76
    rest=money-(n_100*100);//76
    //50
    n_50=rest/50; //1.52
    rest=rest-(n_50*50); //26
    //20    
    n_20=rest/20;//1.3
    rest=rest-(n_20*20); //6
    //10
    n_10=rest/10;//0.6
    rest=rest-(n_10*10); //6
    //5 
    n_5=rest/5;//1.2
    rest=rest-(n_5*5); //1
    //2
    n_2=rest/2;//0.5
    rest=rest-(n_2*2); //1
    //1
    n_1=rest/1;//1
    rest=rest-(n_1*1); //0

    printf("%d\n",money);
    printf("%d nota(s) de R$ 100,00\n",n_100); // not 100.00 ,use 100,00
    printf("%d nota(s) de R$ 50,00\n",n_50);
    printf("%d nota(s) de R$ 20,00\n",n_20);//
    printf("%d nota(s) de R$ 10,00\n",n_10);
    printf("%d nota(s) de R$ 5,00\n",n_5);
    printf("%d nota(s) de R$ 2,00\n",n_2);
    printf("%d nota(s) de R$ 1,00\n",n_1);    
     
    return 0;
}