#include <stdio.h>

int main(){
	int A, B, soma, subtr, mult, divis;
	
	printf("Digite o primeiro valor:\n");
	scanf("%d", &A);
	printf("Digite o segundo valor:\n");
	scanf("%d", &B);
	
	soma = A + B;
	subtr = A - B;
	mult = A * B;
	divis = A / B;
	
	printf("Resultados:\n");
	printf("Soma: %d.\n", soma);
	printf("Subtra.: %d.\n", subtr);
	printf("Multiplic.: %d.\n", mult);
	printf("Divis.: %d.\n", divis);
	
	return 0;
	
}

/* Operadores aritmeticos 
 - soma: +
 - Subtracao: -
 - Multiplicacao: *
 - Divisao: /
 - Resto de divisao inteira: %
 Existe precedencia entre operadores como na matematica comum!
 */
 
 	
	
 
 
 
 
