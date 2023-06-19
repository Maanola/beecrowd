#include <stdio.h>
 
int main() {
    double A=0, B=0, C=0, MED=0;
    
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    
    MED = (A*2 + B*3 + C*5)/10;
    
    printf("MEDIA = %.1lf\n", MED);
    
    return 0;
}
