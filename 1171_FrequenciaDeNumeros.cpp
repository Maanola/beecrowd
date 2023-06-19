#include <stdio.h>
#include <stdlib.h>

int main (){
	int *vet, aux, n;
	
	scanf("%d", &n);
	vet = (int*)malloc(sizeof(int) * n);
	
	for(int i = 0; i < n; i++)
		scanf("%d", &vet[i]);
	
	for(int x=0; x<n; x++){
		for(int y=x; y<n; y++){
		    if (vet[x] > vet[y]){
		    	aux = vet[x];
		    	vet[x] = vet[y];
		    	vet[y] = aux;
		    }
		}
	}
	
	aux = 1;
	for(int i = 0; i < n; i++){
		if (vet[i] == vet[i+1])
			aux += 1;
		else{
			printf("%d aparece %d vez(es)\n", vet[i], aux);
			aux = 1;
		}
	}
	
	return 0;
}
