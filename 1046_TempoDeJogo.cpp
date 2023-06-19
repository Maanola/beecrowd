#include <stdio.h>
 
int main() {
    int ini, fim, hr=0;
    
    scanf("%d", &ini);
    scanf("%d", &fim);
    
    if(ini > fim)
        hr = (24 - ini) + fim;
    else if(ini == fim)
        hr = 24;
    else if(ini < fim)
        hr = fim - ini;
        
    printf("O JOGO DUROU %d HORA(S)\n", hr);
 
    return 0;
}
