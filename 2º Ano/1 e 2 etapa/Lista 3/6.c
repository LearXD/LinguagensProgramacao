#include <stdio.h>

void parse (int *pointsA, int *pointsB, int *goalsA, int *goalsB) {
    if(*goalsA == *goalsB) {
        *pointsA += 1;
        *pointsB += 1;
        return;
    }

    if(*goalsA > *goalsB) {
        *pointsA += 1;
        return;
    }

    *pointsB += 1;
}

void main () {

    int pointsA = 0, pointsB = 0;
    int goalsA = 0, goalsB = 0;

    printf("Digite o numero de pontos do time A e B respectivamente:\n");
    scanf("%d %d", &pointsA, &pointsB);

    printf("Digite a quantidade de gols do time A e B respectivamente:\n");
    scanf("%d %d", &goalsA, &goalsB);

    parse(&pointsA, &pointsB, &goalsA, &goalsB);

    printf("\nPontos do time A: %d", pointsA);
    printf("\nPontos do time B: %d", pointsB);

}
