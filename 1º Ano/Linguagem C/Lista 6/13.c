#include <stdio.h>

void main() {
	float horas, salarioMinimo;
	
	printf("Digite as horas trabalhadas:\n");
	scanf("%f", &horas);
	
	printf("Digite o salario minimo:\n");
	scanf("%f", &salarioMinimo);
	
	printf("Voce ira receber R$ %.2f", (horas * (salarioMinimo / 2)) * 0.97);
}
