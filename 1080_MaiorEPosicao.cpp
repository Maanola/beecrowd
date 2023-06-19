#include <stdio.h>
 
int main() {
    int n, cont, maior=0, pos=0;
    
    for(cont=1;cont<=100;cont++){
        scanf("%d", &n);
        if(n > maior){
            maior = n;
            pos = cont;
    	}
    }
    printf("%d\n", maior);
    printf("%d\n", pos);
 
    return 0;
}
