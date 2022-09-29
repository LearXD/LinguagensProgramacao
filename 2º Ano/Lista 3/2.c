#include <stdio.h>

void change (int *a, int *b) {
    --*a;
    ++*b;
}

void main () {
    int a, b;

    printf("Digite o valor da variavel A e respectivamente o da B:\n");
    scanf("%d %d", &a, &b);

    change(&a, &b);

    printf("\nValor da variavel a: %d", a);
    printf("\nValor da variavel b: %d", b);
}
