#include <stdio.h>

int main (){
	
	float m;
		
	scanf("%f", &m);
	printf("Insira a nota:\n");
	
	if(m >= 7.0){ 
		printf("Aprovado(a)!\n");
	}
	else {
		printf("Reprovado(a)!\n");
	}
	return 0;
	
}

/* 		Comandos if-else
	Se a condicao for verdadeira:
		Bloco do if executado;
		Bloco do else ignorado.
		
	caso contrario (condicao falsa):
		Bloco do if ignorado;
		Bloco do else executado.
*/
