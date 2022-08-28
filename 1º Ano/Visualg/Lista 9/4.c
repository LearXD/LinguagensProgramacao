/*
 * Author: Miguel Silva Pinheiro
*/

#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "Portuguese");

	int i, numbers[10], pares = 0;

	for(i = 0; i < 10; ++i) {
		printf("Digite um numero para a posição %d!\n", i);
		scanf("%d", &numbers[i]);
	}
	
	for(i = 0; i < 10; ++i) {
		if(numbers[i] % 2 == 0) pares++;
 	}
 	
 	printf("Foram digitados %d numeros pares!\n", pares);
 	printf("Foram digitados %d numeros impares!\n", (10 - pares));
}
