#include <stdio.h>




int main() {
	int dado = 10;
	printf(" dado antes do incremento: %d.\n", dado);
	
	dado++;
	printf("depois do incremento: %d.\n", dado);
	
	dado--;
	printf("depois do decremento:, %d.\n", dado);
	
	
	dado+= 3;
	printf("depois do incremento em 3 unidades: %d.\n", dado);
	
	
	dado-=  2;
	printf(" despois do decremento em  unidades: %d.\n", dado);
	
	
	dado*= 10;
	printf("depois de multiplicar por 10: %d.\n", dado);
}
