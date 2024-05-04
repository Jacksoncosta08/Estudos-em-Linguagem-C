// Sintexe:

// printf("texto", <v1>, <v2>, ..., <vN>);

// Especificadores de formato: printf()

// %d - N�meros inteiros em base decimal
// %x - Numeros inteiros em base hexadecimal
// %f - Numeros em ponto flutuante (com casas decimais)
// %e - N�meros em nota��o cient�fica (com casas decimais)
// %c - Caracteres alfanum�ricos (texto)
// %s - Sequencia de caracteres alfanum�ricos (texto)
// %.<num> - Especifica quantos digitos ser�o impressos ap�s a v�rgula

// Sequ�ncias de escape: printf()

// (\a) Toca um bipe, alarme sonoro padr�o do sistema
// (\b) Backspace
// (\n) Quebra de linha
// (\t) Tabula��o horizontal (TAB)
// (\r) Retorna ao in�cio da linha
// (\0) Caractere nulo
// (\v) Tabula��o vertical
// (\\) Caractere \
// (\') Caractere '
// (\") Caractere "
// (\?) Caractere ?
// (\123) Caractere relacionado ao c�digo 123 em octal (ASCII)
// (\X12) Caractere relacionado ao c�digo 12 em hexadecimal (ASCII)
// (\%) Caractere %

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

