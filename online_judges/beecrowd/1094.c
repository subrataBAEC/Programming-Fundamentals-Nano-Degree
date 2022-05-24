//beecrowd 1094

#include<stdio.h>
int main() {
    int number,amount,n;
    int total_c=0,total_r=0,total_s=0;
    char c;
    int total;

    scanf("%d",&number);
    for(int i=0; i<number; i++){
        scanf("%d %c",&n,&c);

        if(c=='C'){
        total_c=n+total_c;
    }
    else if(c=='R'){
        total_r=n+total_r;
    }
    else if(c=='S'){
        total_s=n+total_s;
    }
    total=total_c+total_r+total_s;
    }
    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",total_c);
    printf("Total de ratos: %d\n",total_r);
    printf("Total de sapos: %d\n",total_s);

    double precent_c=((double)total_c/total)*100;
    double precent_r=((double)total_r/total)*100;
    double precent_s=((double)total_s/total)*100;

    printf("Percentual de coelhos: %0.2lf %%\n",precent_c);

    printf("Percentual de ratos: %0.2lf %%\n",precent_r);
    printf("Percentual de sapos: %0.2lf %%\n",precent_s);
    return 0;
}
