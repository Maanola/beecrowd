#include <stdio.h>

int main() {
    double n1=0, n2=0, n3=0, n4=0, med=0, exm=0;
    
    scanf("%lf", &n1);
    scanf("%lf", &n2);
    scanf("%lf", &n3);
    scanf("%lf", &n4);
    
    med = (n1*2 + n2*3 + n3*4 + n4)/10;
    printf("Media: %.1lf\n", med);
    
    if (med >= 7)
        printf("Aluno aprovado.\n");
    else if (med < 5)
        printf("Aluno reprovado.\n");
    else{
        printf("Aluno em exame.\n");
        scanf("%lf", &exm);
        printf("Nota do exame: %.1lf\n", exm);
        med = (med + exm)/2;
        if(med >= 5)
            printf("Aluno aprovado.\n");
        else
            printf("Aluno reprovado.\n");
        printf("Media final: %.1lf\n", med);
    }
    
    return 0;
}
