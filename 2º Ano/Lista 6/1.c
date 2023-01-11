#include <stdio.h>

void main () {
    int matriz[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o numero da linha %d e da coluna %d:\n", j + 1, i + 1);
            scanf("%d", &matriz[i][j]);
            matriz[i][j] *= 5;
        }
    }

    printf("\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}
