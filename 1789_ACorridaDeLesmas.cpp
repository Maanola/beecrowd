#include <stdio.h>

int main() {
    int L, V, n=0;
    
    while((scanf("%d", &L)) != EOF){
        for(int i=0; i<L; i++){
            scanf("%d", &V);
            if(n < V)
				n = V;
        }
        
        if (n < 10)
            printf("1\n");
        else if (n >= 10 && n < 20)
            printf("2\n");
        else
            printf("3\n");
        n = 0;
    }
    
    return 0;
}
