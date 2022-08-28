#include <stdio.h>

void main() {
	float horario;
	
	printf("Digite o horario (horas.minutos):\n");
	scanf("%f", &horario);
	
	printf("%d horas sao %d minutos!\n", (int) horario,( (int)horario) * 60);
}
