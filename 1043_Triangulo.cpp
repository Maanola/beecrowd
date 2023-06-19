#include <stdio.h>
 
int main() {
    double A, B, C, area=0, per=0;
    
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    
    if((A+B) > C && (A+C) > B && (B+C) > A){
        per = A + B + C;
        printf("Perimetro = %.1lf\n", per);
    }
    else{
        area = ((A + B) * C)/2;
        printf("Area = %.1lf\n", area);
    }
 
    return 0;
}
