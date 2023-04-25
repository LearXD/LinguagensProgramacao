#include <stdio.h>

void printf4(float *lado, float *perimetro, float *area) {
    printf("Os dados do quadrado são:\n");
    printf("\nLado: %.2f", *lado);
    printf("\nPerimetro: %.2f", *perimetro);
    printf("\nArea: %.2f", *area);
}

void main () {

    float lado, perimetro, area;
    float *plado, *pperimetro, *parea;

    plado = &lado;
    pperimetro = &perimetro;
    parea = &area;

    printf("Digite o LADO, PERIMETRO e AREA do quadrado:\n");
    scanf("%f %f %f", plado, pperimetro, parea);

    printf4(plado, pperimetro, parea);
}

