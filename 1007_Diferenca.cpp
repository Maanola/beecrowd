#include <stdio.h>
 
int main() {
    int A=0, B=0, C=0, D=0, DIF=0;
    
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);
    
    DIF = (A*B - C*D);
    
    printf("DIFERENCA = %d\n", DIF);
    
    return 0;
}
