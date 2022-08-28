#include <stdio.h>

void main() {
	
	float base, altura;
	
	printf("Digite o valor da base:\n");
	scanf("%f", &base);
	
	printf("Digite o valor da altura:\n");
	scanf("%f", &altura);
	
	printf("O area do triangulo e de %.1f metros quadrados!", (base * altura) / 2);
}
