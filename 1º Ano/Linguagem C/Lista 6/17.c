#include <stdio.h>

void main() {
	float salario, quilowatt;
	
	printf("Digite o valor do salario minimo:\n");
	scanf("%f", &salario);
	
	printf("Digite o valor do consumo quilowatt na residencia:\n");
	scanf("%f", &quilowatt);
	
	printf("O valor do quilowatt e: R$ %.2f\n", salario / 5);
	printf("A residencia ira pagar: R$ %.2f\n", quilowatt * (salario / 5));
	printf("A residencia ira pagar: R$ %.2f (com 15%% de desconto)\n", (quilowatt * (salario / 5)) * 0.85);
	
}
