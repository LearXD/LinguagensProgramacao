#include <stdio.h>

void main() {
	int lado;
	printf("Digite o tamanho dos lados do quadrado:\n");
	scanf("%d", &lado);
	printf("A area e: %d\n", lado * lado);
	printf("O perimetro e: %d\n", lado * 4);
}
