#include <stdio.h>

void main() {
    float seconds;

    printf("Digite um numero em segundos:\n");
    scanf("%f", &seconds);

    printf("%.1f segundos sao:\n", seconds);
    printf("%.1f horas:\n", ((seconds / 60) / 24));
    printf("%.1f minutos:\n", (seconds / 60));
}
