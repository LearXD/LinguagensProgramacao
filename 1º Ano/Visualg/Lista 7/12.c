#include <stdio.h>

void main() {
	
	float max;
	float i;
	
	float soma = 0;
	float temp = 0;
	
	float media;
	
	printf("Digite quantos numeros voce deseja fazer a media:\n");
	scanf("%f", &max);
	
	for(i = 1; i <= max; i++) {
		printf("Digite %.0f o numero:\n", i);
		scanf("%f", &temp);
		soma = soma + temp;
	}
	
	media = (soma / max);
	printf("A media aritmetica e: %f", media);
	
}
