#include <stdio.h>
#include <stdlib.h>

void main() {
    int arraySize;

    printf("Digite o tamanho dos vetores: \n");
    scanf("%d", &arraySize);

    int
    *array1 = (int*) malloc(arraySize * sizeof(int)),
    *array2 = (int*) malloc(arraySize * sizeof(int));

    for(int i = 0; i < arraySize; i++) {
        printf("Digite o valor da posicao %d: \n", i + 1);
        scanf("%d", &array1[i]);
    }

    copyArray(array1, array2, arraySize);

    printf("\nVetor 1:\n");
    printArrayValues(array1, arraySize);

    printf("\nVetor 2:\n");
    printArrayValues(array2, arraySize);
}

void printArrayValues(int *array, int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        printf("Posicao %d... Valor => %d\n", i + 1, array[i]);
    }
}

void copyArray (int *array1, int *array2, int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        array2[i] = array1[i];
    }
}
