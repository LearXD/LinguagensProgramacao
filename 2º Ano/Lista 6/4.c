#include <stdio.h>

void main () {
    int matriz[2][2];
    int matriz2[2][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Digite o numero da linha %d e da coluna %d da matriz 1:\n", j + 1, i + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Digite o numero da linha %d e da coluna %d da matriz 2:\n", j + 1, i + 1);
            scanf("%d", &matriz2[i][j]);
            matriz2[i][j] += matriz[i][j];
        }
    }

    printf("\n");

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matriz2[i][j]);
        }
        printf("\n");
    }
}
