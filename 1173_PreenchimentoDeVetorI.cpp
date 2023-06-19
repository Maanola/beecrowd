#include <stdio.h>
 
int main() {
    int V, N[10], r;
    
    scanf("%d", &V);
    
    for (int i=0; i<10; i++){
    	r = V;
    	printf("N[%d] = %d\n", i, r);
    	V = V*2;
	}
 
    return 0;
}
