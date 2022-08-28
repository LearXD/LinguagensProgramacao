#include <stdlib.h>
#include <stdio.h>

void main() {
	
	system("Color 0A");

	int nota = 0;
	float notas[3] = {-1.0, -1.0, -1.0};
	float pesos[3] = {-1.0, -1.0, -1.0};

	while(notas[nota] == -1) {
		printf("Digite o valor da nota %d :\n", nota + 1);
		scanf("%f", &notas[nota]);
		nota++;	
	}
	nota = 0;
	
	while(pesos[nota] == -1) {
		printf("Digite o peso da nota %d :\n", nota + 1);
		scanf("%f", &pesos[nota]);
		nota++;
	}
	
	printf("%f\n", notas[0]);
	printf("%f\n", notas[1]);
	printf("%f\n", notas[2]);
	
	printf("%f\n", pesos[0]);
	printf("%f\n", pesos[1]);
	printf("%f\n", pesos[2]);


	printf("A media ponderada e %f\n", ((notas[0] * pesos[0] + notas[1] * pesos[1] + notas[2] * pesos[2]) / (notas[0] + notas[1] + notas[2])) );

}

