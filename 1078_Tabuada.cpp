#include <stdio.h>
 
int main() {
    int N, r=0, cont=1;
    
    scanf("%d", &N);
    
    while (cont < 11){
        r = cont * N;
        printf("%d x %d = %d\n", cont, N, r);
        cont++;
    }
 
    return 0;
}
