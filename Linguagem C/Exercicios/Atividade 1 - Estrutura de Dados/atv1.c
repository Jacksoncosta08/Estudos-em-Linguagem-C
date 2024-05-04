#include <stdio.h>
#include <stdlib.h>

int main(){
	int x;
	int *y;

	printf("Digite o valor de x: %d\n");
	scanf("%d", &x);
	
	y = &x;
	
	*y = 12;
	
	y = y + 1;
	
	*y = *y + 5;
	
	printf("O valor de x: %d\n", x);

	return 0;

}

