#include <stdio.h>

int main(){
	
	int dado = 10;
	printf("Dado antes do incremento: %d.\n", dado);
	
	dado++;
	printf("Depois do incremento (++): %d.\n", dado);
	
	dado--;
	printf("Depois do decremento (--): %d.\n", dado);
	
	dado +=3;
	printf("Depois do incremento em 3 unidades (+=): %d.\n", dado);
	
	dado -= 2;
	printf("Depois do decremento em 2 unidades (-=): %d.\n", dado);
	
	dado *= 10;
	printf("Depois de multiplicar por 10 (*=): %d.\n", dado);
	
	dado /= 11;
	printf("Depois de dividir por 11(/=): %d.\n", dado);
	
}

/*	Operadores de atribuicao aritmetica
 	- Incremento em 1 unidade: ++
 	- Decremento em 1 unidade: --
 	- Incremento generico: +=
 	- Decremento generico: -=
 	- Atribuicao com multiplicacao: *=
 	Atribuicao com divisao: /=
*/
