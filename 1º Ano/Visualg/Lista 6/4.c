#include <stdio.h>

void main () {
	
	float salario;
	
	printf("Digite o valor do salario:\n");
	scanf("%f", &salario);
	
	printf("O valor final do salario sera: R$ %.2f\n", (salario * 1.05) - (salario * 0.07));
	
}
