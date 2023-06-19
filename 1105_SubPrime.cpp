#include <stdio.h>

int main(){
	int N, B, BC, credor, vlr, dev, res[20];

 	scanf ("%d %d", &B, &N);

	while (B!=0 && N!=0){
		for (int i=0; i<B; i++)
			scanf ("%d", &res[i]);
			
		for (int i=0; i<N; i++){
			scanf ("%d %d %d", &dev, &credor, &vlr);
			res[dev - 1] -= vlr;
			res[credor - 1] += vlr;
   		}
   		
		for (int i=0; i<B; i++){
            if (res[i] < 0)
                BC = 1;
		}
		
        if (BC == 1)
            printf("N\n");
        else
            printf("S\n");

		BC = 0;
		scanf("%d %d", &B, &N);
	}
	
	return 0;
}
