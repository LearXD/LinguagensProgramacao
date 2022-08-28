#include <stdio.h>

void main() {
	float peso, gato1, gato2;
	
	printf("Digite o peso do saco de racao (em KG):\n");
	scanf("%f", &peso);
	
	printf("Digite a quantidade de racao fornecida para o gato 1: (em gramas)\n");
	scanf("%f", &gato1);
	
	printf("Digite a quantidade de racao fornecida para o gato 2: (em gramas)\n");
	scanf("%f", &gato2);
	
	printf("O peso do saco apos 5 dias sera de %.2f KG!", peso - ((gato1/1000) * 5) - ((gato1/1000) * 5));
	
}
