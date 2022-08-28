#include <stdio.h>

void main() {
	float numero;
	
	printf("Digite um numero real:\n");
	scanf("%f", &numero);
	
	printf("A parte inteira do numero e: %d\n", (int) numero);
	printf("A parte inteira do numero e: %f\n", numero - ((int) numero));
	printf("O arredondamento desse numero e: %d\n", (int) ((numero + 0.5)));
	
}
