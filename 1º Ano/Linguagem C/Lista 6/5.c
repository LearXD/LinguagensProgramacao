#include <stdio.h>

void main() {
	
	float salario;
	
	printf("Digite o valor do salario:\n");
	scanf("%f", &salario);
	
	printf("O sal�rio final ser� de: R$ %.2f", salario * 0.9 + 50);
}
