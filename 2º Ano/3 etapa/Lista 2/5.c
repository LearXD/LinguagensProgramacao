#include <stdio.h>

typedef struct {
    int heigth;
    int width;
} Retangle;

int getBiggest (Retangle retangles[], int size) {
    int area = retangles[0].width * retangles[0].heigth;
    for (int i = 0; i < size; i++) {
        if( (retangles[i].width * retangles[i].heigth) > area) {
            area = (retangles[i].width * retangles[i].heigth);
        }
    }
    return area;
}

void main () {

    int size;

    printf("Digite quantos retangulos ira inserir: \n");
    scanf("%d", &size);

    Retangle retangles[size];

    for ( int i = 0; i < size; i++) {
        printf("Digite os dados do retangulo %d \n", i + 1);

        printf("Digite a altura: \n");
        scanf("%d", &retangles[i].heigth);

        printf("Digite a largura: \n");
        scanf("%d", &retangles[i].width);
    }

    printf("O retangulo de mair de area: %dm^2", getBiggest(retangles, size));

}
