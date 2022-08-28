#include <stdio.h>

void main() {
	int numero;
	
	printf("Digite um numero para obter a tabuada:\n");
	scanf("%d", &numero);
	
	int i;
	for(i = 0; i <= 10; i++) {
		printf("%d x %d = %d\n", numero, i, numero * i);
	}
} 
