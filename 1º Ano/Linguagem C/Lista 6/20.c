#include <stdio.h>

void main() {
	
	float custo, preco;
	
	printf("Digite o custo do espetaculo:\n");
	scanf("%f", &custo);
	
	printf("Digite o preco do espetaculo:\n");
	scanf("%f", &preco);
	
	printf("Devem ser vendidos %d ingressos para que o custo do espetaculo seja alcancado!", (int) ((custo / preco) + 0.5));
	
}
