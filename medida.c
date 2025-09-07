
#include <stdio.h>

int main()
{
    float metros, dec, cen, mil;
    printf("digite o valor em metros:");
    scanf("%f", &metros);
    dec = metros * 10;
    cen = metros * 100;
    mil = metros * 1000;
    printf("decimetros = %f \n", dec);
    printf("centimetros = %f \n", cen);    
    printf("milimetros = %f ", mil);
    
    return 0;
}
