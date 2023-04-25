#include <stdio.h>

int isEven (int number) {
    return number % 2 == 0;
}

void main () {
    int matriz[2][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Digite o numero da linha %d e da coluna %d:\n", j + 1, i + 1);
            scanf("%d", &matriz[i][j]);
            matriz[i][j] = isEven(matriz[i][j]) ? 1 : -1;
        }
    }

    printf("\n");

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}
