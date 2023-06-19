#include <stdio.h>
 
int main() {
    char nome[20];
    double salFx=0, totVd=0, total=0;
    
    scanf("%s", &nome);
    scanf("%lf", &salFx);
    scanf("%lf", &totVd);
    
    total = salFx + (totVd*0.15);
    
    printf("TOTAL = R$ %.2lf\n", total);
    
    return 0;
}
