#include <stdio.h>

int main()
{
    int idd;
    printf("digite sua idade:\n");
    scanf("%d", &idd);
    
    if (idd < 18) {
        printf("criança");
    }
    if (idd > 18 ) {
        if (idd < 65) {
            printf("adulto");
        }
    }
    if (idd > 65) {
            printf("idoso");
    }



}
