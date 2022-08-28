#include <stdio.h>
#include <math.h>

float dist (float aX, float aY, float bX, float bY);

void main () {
	float aX, aY, bX, bY;
	
	printf("Digite a posicao X do primeiro ponto:\n");
	scanf("%f", &aX);
	
	printf("Digite a posicao Y do primeiro ponto:\n");
	scanf("%f", &aY);
	
	printf("Digite a posicao X do segundo ponto:\n");
	scanf("%f", &bX);
	
	printf("Digite a posicao Y do segundo ponto:\n");
	scanf("%f", &bY);
	
	printf("A distancia dos vetores e %f", dist(aX, aY, bX, bY));
}

float dist (float aX, float aY, float bX, float bY) {
	return sqrt(pow(bX - aX, 2) + pow(bY - aY, 2));
}