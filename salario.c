#include <stdio.h>

int main()
{
    float s, d;
    printf("digite seu salario:\n");
    scanf("%f", &s);
    
    if ( s <= 600) {
        printf("isento");
    }else if (s > 600 && s <= 1200) {
        d = s - (s * 0.20);
        printf("%f", d);
        
    }else if (s > 1200 && s <= 2000) {
        d = s - (s * 0.25);
        printf("%f", d);
        
    }else if (s > 2000) {
        d = s - (s * 0.30);
        printf("%f", d);
        
    }
    
}
