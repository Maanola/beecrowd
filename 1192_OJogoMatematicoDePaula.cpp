#include <stdio.h>

int main() {
    int N, d1, d2;
    char l[4];
    
    scanf("%d", &N);
    
    while(N > 0){
    	scanf("%s", &l);
    	
    	d1 = l[0] - '0';
    	d2 = l[2] - '0';
    	
    	if(d1 == d2)
    		printf("%d\n", d1*d2);
		else if(l[1] >= 65 && l[1] <= 90)
			printf("%d\n", d2-d1);
		else if(l[1] >= 97 && l[1] <= 122)
			printf("%d\n", d1+d2);
		
        N--;
    }
 
    return 0;
}
