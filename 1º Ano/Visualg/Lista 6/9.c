#include <stdio.h>
#include <math.h>

void main() {
	float base, expoente;
	
	printf("Digite o valor da base:\n");
	scanf("%f", &base);
	
	printf("Digite o valor do expoente:\n");
	scanf("%f", &expoente);
	
	printf("A resultado da potencia e: %.1f", pow(base, expoente));
}
