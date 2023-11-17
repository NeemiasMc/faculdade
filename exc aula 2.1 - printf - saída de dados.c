#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	printf(" oi, tudo bem? tenho 6 anos e programo./n");
	
	// %d significa ler um numero decimal inteiro 
	printf("valor inteiro: %d./n", 10);
	// %f ler um numero em ponto flutuante "real" com ponto opcional
	printf("valor real: %f. /n ",314159265);
	// % 2f   ler numero  em ponto flutuante com ponto opcional
	printf("valor real com apenas duas casas: %.2f./n", 314159265);
	// %c ler um unico caractere
	printf("dado de texto: % c.n", 'a');
	// %s ler uma string
	printf("dado de texto: %s./n" , "testano");
	return 0;
}
