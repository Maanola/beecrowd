#include <stdio.h>

int main(){
	int X1, Y1, X2, Y2, dx, dy;

while((scanf("%d %d %d %d",&X1, &Y1, &X2, &Y2)) && (X1!=0 && Y1!=0 && X2!=0 && Y2!=0)){
	dx = X2 - X1;
    dy = Y2 - Y1;
	
	if (dx==0 && dy==0)
        printf("0\n");
    else if (dx==0 || dy==0 || dx==dy || dx==-dy)
        printf("1\n");
    else
        printf("2\n");
	}
	
	return 0;
}
