#include <stdio.h>

void main() {
	
	float deposito;
	float rendimento;
	
	printf("Digite o valor do deposito:\n");
	scanf("%f", &deposito);
	
	printf("Digite o valor do redimento:\n");
	scanf("%f", &rendimento);
	
	printf("O rendimento foi de: R$ %.2f\n", deposito * rendimento / 100);
	printf("O saldo com rendimento sera: R$ %.2f\n", deposito + (deposito * rendimento / 100));
	
}
