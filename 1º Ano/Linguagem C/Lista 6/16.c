#include <stdio.h>

void main() {
	float altura, distancia;
	
	printf("Digite o tamanho dos degraus (em centimetros):\n");
	scanf("%f", &altura);
	
	printf("Digite a distancia que deseja alcancar (em metros):\n");
	scanf("%f", &distancia);
	
	printf("Voce precisa subir %.1f degraus para alcancar seu objetivo!\n", (distancia * 100) / altura);
}
