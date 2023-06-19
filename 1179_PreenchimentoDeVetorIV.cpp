#include <stdio.h>
 
int main() {
    int par[5], impar[5], n, cont1=0, cont2=0;
    
    for (int i=0; i<15; i++){
    	scanf("%d", &n);
    	
    	if(n%2 == 0){
    		par[cont1] = n;
    		cont1++;
		}
		else{
			impar[cont2] = n;
			cont2++;
		}
		
		if(cont1 == 5){
			for(int j=0; j<5; j++)
				printf("par[%d] = %d\n", j, par[j]);
			cont1 = 0;
		}
		if(cont2 == 5){
			for(int k=0; k<5; k++)
				printf("impar[%d] = %d\n", k, impar[k]);
			cont2 = 0;
		}		
	}
		
	for(int k=0; k<cont2; k++)
		printf("impar[%d] = %d\n", k, impar[k]);
		
	for(int j=0; j<cont1; j++)
		printf("par[%d] = %d\n", j, par[j]);
	
    return 0;
}
