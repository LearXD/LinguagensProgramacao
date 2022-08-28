#include <stdio.h>
#include <math.h>

void main() {
	float saldo;
	
	printf("Digite o valor do deposito:\n");
	scanf("%f", &saldo);

	printf("O valor na conta e de: R$ %f", saldo * (1 - pow(0.38 / 100, 2)));
}
