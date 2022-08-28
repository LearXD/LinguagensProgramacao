#include <stdio.h>

float getArithmeticAverage (float n1, float n2, float n3);
float getWeightedAverage (float n1, float n2, float n3);

void process(char averageType, float n1, float n2, float n3) {

    const char averageTypeDefault = 65;

    float average;

    switch (averageType) {
    case 65: // A em ASCII CODE...
        printf("* Calculando a Media Aritmetica...\n");
        average = getArithmeticAverage(n1, n2, n3);
        break;
    case 80: // P em ASCII CODE...
        printf("* Calculando a Media Ponderada...\n");
        average = getWeightedAverage(n1, n2, n3);
        break;
    default:
        printf("* Tipo de media nao existente! Adotando Media Aritmetica...\n");
        process(averageTypeDefault, n1, n2, n3);
        return;
    }

    printf("A media e: %.2f\n", average);
}

float getArithmeticAverage (float n1, float n2, float n3) {
    return ((n1 + n2 + n3) / 3);
}

float getWeightedAverage (float n1, float n2, float n3) {
    return ((n1 * 5) + (n2 * 3) + (n3 * 2))/(10);
}

void main () {
    float n1, n2, n3;
    char averageType;

    printf("Digide a opcao de media, sendo que:\n");
    printf("\tA => Media Aritmetica\n");
    printf("\tP => Media Ponderada\n");

    scanf("%c", &averageType);

    printf("Agora digite respectivamente todas as 3 notas:\n");
    scanf("%f%f%f", &n1, &n2, &n3);

    process(averageType, n1, n2, n3);
}