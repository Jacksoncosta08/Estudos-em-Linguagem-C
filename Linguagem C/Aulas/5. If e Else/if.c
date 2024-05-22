#include <stdio.h>

int main (){
	
	float m;
		
		printf("Insira a nota:\n");
		scanf("%f", &m);
		
/*Sintaxe:
if(<condicao>){
	<bloco_de_comamndos>
}*/
		if(m >= 7.0){ // Nao leva ";", por que ele define um novo bloco de comando.
			printf("Aprovado(a)!\n");
		}
	return 0;
}

 /*	Operadores relacionais:
	- Maior que: >
	- Maior ou igual a: >=
	- Menor que: <
	- Menor ou igual a: <=
	- Igual: ==
	- Diferente: !=
*/	

