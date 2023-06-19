#include <stdio.h>

int main(){
	int h1, m1, h2, m2, dur;
	
	scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

	while (h1!=0 || m1!=0 || h2!=0 || m2!=0){
		m1 += h1*60;
		m2 += h2*60;
		
	 	if (m1 < m2){
			dur = m2 - m1;
			printf("%d\n", dur);
		}
		else if (m1 > m2){
	    	dur = (m2-m1) + 1440;
			printf("%d\n", dur);
		}
		else if ((m2-m1) == 0)
			printf("1440\n");
			
		scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
	}
	
	return 0;
}
