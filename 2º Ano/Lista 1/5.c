#include <stdio.h>

int main() {
    int numero;
    printf("Digite um numero:\n");
    scanf("%d", &numero);
    printf("O resultado foi %d\n", isEven(numero));
    return 0;
}

int isEven(int number){
    return (number % 2 == 0);
}