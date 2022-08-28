/*
 * Author: Miguel Silva Pinheiro
*/

#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "Portuguese");

	int i, numbers[6];

	for(i = 0; i < 6; ++i) {
		printf("Digite um numero para a posição %d!\n", i);
		scanf("%d", &numbers[i]);
	}
	
	printf("\nConvertendo vetor...\n\n");

	
	for(i = 5; i >= 0; --i) {
		printf("Numero da posição %d do vetor: %d\n", i ,numbers[i]);
	}

}
