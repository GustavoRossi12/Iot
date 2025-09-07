#include <stdio.h>
#define PI 3.14159

int main()
{
    printf("Hello World");
    
    //cálculo da área do circulo
    float raio, area;
    raio = 12.0;
    area = PI * raio * raio;
    printf("Area = %f", area);
    return 0;
}
