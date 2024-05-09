#include <stdio.h>

#define texto "Entrada e saida de dados."

int main(){
	printf("%s\n", texto);
	
	int idade = 0;
	float altura = 0.0;
	char nome[50] = ""; //variaveis do tipo char sao vetores, e necessario informar quantos caracteres cabem naquele char
	
	printf("Digite a idade:\n");
	scanf("%d", &idade);
	
	printf("Digite a altura:\n");
	scanf("%f", &altura);
	
	printf("Digite o nome:\n");
	scanf("%s", nome);
	
	printf("Dados informados:\n");
	printf("Idade: %d.\n", idade);
	printf("Altura: %.2f.\n", altura);
	printf("Nome: %s.\n", nome);
} 

/* Variaveis e atribuicao de dados

Variaveis: espacos em mamoria para armazenar dados
sintexe: <tipo> <nome>;
Nomenclatura:
Nao pode:
	- Nao pode comecar com numeros;
	- Nao pode caracteres especiais;
	- Nao pode espaco
Pode:	
	- Letras: "A, B, C..."
	- Underlin: "_";
	- Numeros: idade2; (desde que nao no inicio)
	
Tipos de dados:
	
	char: 1 byte (8 bits)
	int (short): 2 bytes (16 bits)
	int (long): 4 bytes (32 bits)
	float: 4 bytes (32 bits)
	double: 8 bytes (64 bits)
	
Atribuicao:
	Operador "="
		o que eestiver a direita e atribuido a variavel que esta a esquerda do operador
		
	Sintaxe: <variavel> = <informacao>;
	
Constante: Nao permite alteracao que o dado se modifique.
	Diretiva '#define:' cria-se um identificador para um dado de qualquer tipo
		Mesmas regras de nomenclatura de variaveis
		
	Sintaxe declaracao: #define <nome> <valor>
*/
