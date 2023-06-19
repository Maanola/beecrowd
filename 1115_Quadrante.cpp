#include <stdio.h>
 
int main() {
    int X=1, Y=1;
	
	while(X != 0 || Y != 0){
		scanf("%d", &X);
   		scanf("%d", &Y);

        if(X > 0 && Y > 0){
        	printf("primeiro\n");
        }
        if(X < 0 && Y > 0){
            printf("segundo\n");
        }
        if(X < 0 && Y < 0){
            printf("terceiro\n");
        }
        if(X > 0 && Y < 0){
            printf("quarto\n");
        }
	}
	
	return 0;
}
