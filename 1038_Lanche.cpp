#include <stdio.h>

int main() {
    int cod=0, qnt=0;
    double tot=0;
    
    scanf("%d", &cod);
    scanf("%d", &qnt);
    
    if(cod == 1)
        tot = qnt * 4;
    else if(cod == 2)
        tot = qnt * 4.5;
    else if(cod == 3)
        tot = qnt * 5;
    else if(cod == 4)
        tot = qnt * 2;
    else if(cod == 5)
        tot = qnt * 1.5;
        
    printf("Total: R$ %.2lf\n", tot);
    
    return 0;
}
