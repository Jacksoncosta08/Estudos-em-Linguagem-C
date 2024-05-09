/* Entrada de dados:

Para utilizar o scanf e necessario que haja variaveis para guardar as informacoes inseridas pelo usuario.

Sintaxe:
	scanf (<form.>, &<v1>, &<v2>..., &<vN>);
	
Biblioteca <stdio.h>
*/

#include <stdio.h>

int main(){
	int idade = 0; // A variavel foi iniciada para que o espaço de memoria alocado seja preenchido com o '0' e nao seja preenchida por nenhum lixo eletronico de outro programa.
	
	printf("Valor inicial da idade:%d.\n", idade);
	
	printf("Digite uma idade:\n");
	scanf("%d", &idade); // utilizamo o especificador de formato %d (numeros inteiros) e o '&' para endereçar à variavel que vai guardar o dado.
	
	printf("Idade informada: %d\n", idade);
	
	return 0;
	
}
