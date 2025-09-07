#include <stdio.h>

int main()
{
        int n, vf, f;
    printf("digite seu numero:\n");
    scanf("%d", &n);
    
    f = n % 3;
    
    if (f == 0 ) {
        vf = n + 1;
        printf("%d",vf);
    }else {
        vf = n - 1;
        printf("%d",vf);
    }
    
    
    
    
    
    
}
