#include <stdio.h>
#include <math.h>

int getValue (int number);

int main() {

    int numero;

    printf("Digite um numero:\n");
    scanf("%d", &numero);

    printf("O resultado foi %d\n", getValue(numero));

    return 0;
}

int getValue (int number){
    return number < 0 ? -1 : (number > 0) ? 1 : 0;
}