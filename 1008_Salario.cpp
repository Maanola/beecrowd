#include <stdio.h>
 
int main() {
    int num=0, hrs=0;
    double vlrHr=0, sal=0;
    
    scanf("%d", &num);
    scanf("%d", &hrs);
    scanf("%lf", &vlrHr);
    
    sal = hrs * vlrHr;
    
    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2lf\n", sal);
    
    return 0;
}
