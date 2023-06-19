#include <stdio.h>
 
int main() {
    double raio=0, n=3.14159, area=0;
    
    scanf("%lf", &raio);
    
    area = n * (raio*raio);
    
    printf("A=%.4lf\n", area);
 
    return 0;
}
