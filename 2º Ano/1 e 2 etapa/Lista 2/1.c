#include <stdio.h>

int max(int a, int b) {
    return a >= b ? a : b;
}

int min(int a, int b) {
    return a <= b ? a : b;
}

int inBetween(int a, int b) {
    int sum = 0;
    for(int i = (min(a,b) + 1); i <= (max(a,b) - 1); i++) {
        sum += i;
    }
    return sum;
}

void main () {
    int a, b;
    printf("Digite dois numeros positivos:\n");
    scanf("%d %d", &a, &b);
    printf("A soma entre os numeros e: %d", inBetween(a, b));
}

