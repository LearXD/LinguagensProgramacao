#include <stdio.h>

void main () {
	
	float pes, polegadas, jardas, milhas;
	
	printf("Digite o valor em pes:\n");
	scanf("%f", &pes);
	
	polegadas = pes * 12;
	jardas = pes / 3;
	milhas = jardas / 1760;
	
	printf("%.1f pes sao:\n %.1f Polegadas; \n %.1f Jardas; \n %f Milhas", pes, polegadas, jardas, milhas);
	
}
