#include <stdlib.h>
#include <stdio.h>

void main() {
	
	float salario;
	
	system("Color 0A");
	
	printf("Escreva o valor do salário:\n");
	scanf("%3f", &salario);
	
	printf("O salario com 25%% de de aumento e %.2f !", salario * 1.25);

}

