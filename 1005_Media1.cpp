#include <stdio.h>
 
int main() {
    double A=0, B=0, MED=0;
    
    scanf("%lf", &A);
    scanf("%lf", &B);
    
    MED = (A*3.5 + B*7.5)/11;
    
    printf("MEDIA = %.5lf\n", MED);
    
    return 0;
}
