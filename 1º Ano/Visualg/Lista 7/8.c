#include <stdio.h>

void main() {
	float distancia;
	int bandeira;
	
	printf("Digite a distancia da corrida (em quilometros):\n");
	scanf("%f", &distancia);
	
	printf("Digite o tipo da bandeira:\n");
	scanf("%d", &bandeira);
	
	printf("O valor da corrida e R$ %.2f:\n", bandeira == 1 ? (distancia * 1.8) : (distancia * 2.3));

}
