#include <stdio.h>

void printf4(float *raio, float *perimetro, float *area) {
    printf("Os dados do circulo são:\n");
    printf("\nLado: %.2f", *raio);
    printf("\nPerimetro: %.2f", *perimetro);
    printf("\nArea: %.2f", *area);
}

void main () {

    float raio, perimetro, area;
    float *praio, *pperimetro, *parea;

    praio = &raio;
    pperimetro = &perimetro;
    parea = &area;

    printf("Digite o RAIO, PERIMETRO e AREA do circulo:\n");
    scanf("%f %f %f", praio, pperimetro, parea);

    printf4(praio, pperimetro, parea);
}

