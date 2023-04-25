#include <stdio.h>

void main () {
    int x, y;

    printf("Digite o primeiro numero:\n");
    scanf("%d", &x);

    printf("Digite o segundo numero:\n");
    scanf("%d", &y);

    printf("O menor numero e: %d", min(x, y));
}

int min (int x, int y) {
    return x < y ? x : y;
}