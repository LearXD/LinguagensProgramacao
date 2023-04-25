#include <stdio.h>

int max(int a, int b) {
    return a >= b ? a : b;
}

int min(int a, int b) {
    return a <= b ? a : b;
}

int inBetween(int a, int b, int middle) {
    int sum = 0;
    for(int i = min(a,b); i <= max(a,b); i++) {
        if(i % middle == 0) {
            sum += i;
        }
    }
    return sum;
}

void main () {
    int a, b, c;
    printf("Digite 3 numeros, sendo que o primeiro precisa ser maior que 1:\n");
    scanf("%d %d %d", &a, &b, &c);

    if(a <= 1) {
        printf("O primeiro numero precisa ser maior que 1");
        return;
    }

    printf("O resultado e %d", inBetween(b, c, a));
}
