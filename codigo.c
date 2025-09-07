#include <stdio.h>

int main()
{
    int s, c, sf;
    printf("digite seu salario:\n");
    scanf("%d", &s);
    printf("digite seu cod:\n");
    scanf("%d", &c);
 
    if (c == 1) {
       sf = s + (s * 0.70);
       printf("%d", sf);
    }else if (c == 2) {
       sf = s + (s * 0.90);
       printf("%d", sf);
    }else if (c == 3) {
       sf = s + (s * 0.50);
       printf("%d", sf);
    }else if (c == 4) {
       sf = s + (s * 1.20);
       printf("%d", sf);
    }else {
        printf("cod não encontrado");
    }
}
