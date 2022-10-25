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
        printf("Digite o valor da posicao %d do Vetor 1: \n", i + 1);
        scanf("%d", &array1[i]);

        printf("Digite o valor da posicao %d do Vetor 2: \n", i + 1);
        scanf("%d", &array2[i]);
    }

    int repeated = 0;
    for (int i = 0; i < arraySize; i++) {
        if(inArray(array1[i], array2, arraySize)) {
            repeated++;
        }
    }

    printf("\nForam encontrados %d valores repetidos nos vetores!", repeated);
}

int inArray(int needle, int *array, int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        if (array[i] == needle)
        return 1;
    }
    return 0;
}
