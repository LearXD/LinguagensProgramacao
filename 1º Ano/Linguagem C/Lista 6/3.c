#include <stdio.h>

void main () {

	
	float salario;
	float aumento;
	
	printf("Digite o valor do salario:\n");
	scanf("%f", &salario);
	
	printf("Digite o valor do aumento:\n");
	scanf("%f", &aumento);
	
	printf("O valor do salário com %.2f%% de desconto será de R$%.2f\n", aumento, salario + (salario * aumento / 100));
	
}
