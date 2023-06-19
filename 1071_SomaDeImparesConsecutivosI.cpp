#include <stdio.h>
 
int main() {
    int X, Y, soma=0;
	
    scanf("%d", &X);
    scanf("%d", &Y);
    
    if (X > Y){
    	while (X > (Y+1)){
    		X--;
	        if((X % 2) != 0)
	            soma += X;
	    }
	}
    else{
	    while (Y > (X+1)){
	    	Y--;
	        if((Y % 2) != 0)
	            soma += Y;
	    }
	}
    
    printf("%d\n", soma);
 
    return 0;
}
