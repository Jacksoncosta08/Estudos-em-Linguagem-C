#include <stdio.h>

int main (){
	
	float m;
		
		printf("Insira a nota:\n");
		scanf("%f", &m);
		
		if(m >= 4.0 && m < 7.0){ 
		// para cada comparacao entre dois valores e necessario um operador relacional entre eles.
			printf("Tem direito a exame!\n");
		}
		
	return 0;
	
}

/* Operadores Logicos:

	Conjuncao ("e" logico"): "&&"
		É verdade quando tudo for verdade
		
	Disjuncao ("ou" logico): "||"
		É verdade se ao menos 1 for verdade
		
	Inversao (negacao - "nao logico"): "!"
		É verdade quando o operando é falso
		
*/
