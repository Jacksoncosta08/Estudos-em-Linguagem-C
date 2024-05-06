/*Sintexe:

printf("texto", <v1>, <v2>, ..., <vN>);

Especificadores de formato: printf()

%d - Numeros inteiros em base decimal
%x - Numeros inteiros em base hexadecimal
%f - Numeros em ponto flutuante (com casas decimais)
%e - Numeros em notacao cientifica (com casas decimais)
%c - Caracteres alfanumericos (texto)
%s - Sequencia de caracteres alfanumericos (texto)
%.<num> - Especifica quantos digitos serao impressos apos a virgula

Sequencias de escape: printf()

(\a) Toca um bipe, alarme sonoro padr�o do sistema
(\b) Backspace
(\n) Quebra de linha
(\t) Tabulacao horizontal (TAB)
(\r) Retorna ao inicio da linha
(\0) Caractere nulo
(\v) Tabulacao vertical
(\\) Caractere \
(\') Caractere '
(\") Caractere "
(\?) Caractere ?
(\123) Caractere relacionado ao codigo 123 em octal (ASCII)
(\X12) Caractere relacionado ao codigo 12 em hexadecimal (ASCII)
(\%) Caractere %
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("Oi, tudo bem? Tenho 33 anos e programo.\n");
	
	printf("Valor inteiro: %d.\n", 10);
	printf("Valor real: %f.\n", 3.14159265);
	printf("Valor real com apenas duas casas: %.2f.\n", 3.14159265);
	printf("Dado de texto: %c.\n", 'a');
	printf("Dado de texto: %s.\n", "testando");
	
	return 0;
}

