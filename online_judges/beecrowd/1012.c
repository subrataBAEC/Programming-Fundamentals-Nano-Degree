#include <stdio.h>
 
int main() {
 
    double a,b,c,pi;
    double area_tri,area_cir,area_trap,area_sq,area_rec;
    pi=3.14159;
    
    scanf("%lf %lf %lf",&a,&b,&c);
    //tri
    area_tri=0.5*a*c; 
    //cir
    area_cir=pi*c*c;
    //trap
    area_trap=0.5*(a+b)*c;
    //sq
    area_sq=b*b;
    //rec
    area_rec=a*b;

    printf("TRIANGULO: %0.3lf\n",area_tri);
    printf("CIRCULO: %0.3lf\n",area_cir);
    printf("TRAPEZIO: %0.3lf\n",area_trap);
    printf("QUADRADO: %0.3lf\n",area_sq);
    printf("RETANGULO: %0.3lf\n",area_rec);
    
 
    return 0;
}