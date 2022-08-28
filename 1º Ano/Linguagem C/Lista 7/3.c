#include <stdio.h>

void main() {
	int lado, base;
	printf("Digite o tamanho do lado do retangulo:\n");
	scanf("%d", &lado);
	printf("Digite o tamanho da base do retangulo:\n");
	scanf("%d", &base);
	
	printf("A area e: %d\n", base * lado);
	printf("O perimetro e: %d\n", base * 2 + lado *2);
}
