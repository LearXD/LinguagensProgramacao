#include <stdio.h>

void main () {
	
	float preco, lucro, imposto;
	
	printf("Digite o preco de fabrica do carro:\n");
	scanf("%f", &preco);
	
	printf("Digite o valor do lucro do distribuidor:\n");
	scanf("%f", &lucro);
	
	printf("Digite o valor do percentual dos impostos:\n");
	scanf("%f", &imposto);
	
	printf("O lucro do distribuidor e de: R$%.2f\n", preco * lucro / 100 );
	printf("O valor correspondente aos impostos e de: R$%.2f\n", preco * imposto / 100 );
	printf("O preco final do carro e de R$ %.2f\n", preco + (preco * lucro / 100) + (preco * imposto / 100));
}
