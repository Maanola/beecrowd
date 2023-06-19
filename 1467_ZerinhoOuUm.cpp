#include <stdio.h>
 
int main() {
    int A, B, C, i;
    
    while((scanf("%d %d %d", &A, &B, &C)) != EOF){
        if(A == B && C != A)
            printf("C\n");
        else if(B == C && A != B)
            printf("A\n");
        else if(C == A && B != C)
            printf("B\n");
        else if(A == B && B == C)
            printf("*\n");
    }
 
    return 0;
}
