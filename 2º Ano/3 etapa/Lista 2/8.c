#include <stdio.h>

typedef struct {
    int size;
    int *elements;
} Array;

void main () {

    Array array;

    printf("Digite o tamanho do vetor: \n");
    scanf("%d", &array.size);
    fflush(stdin);

    array.elements = (int*) malloc(array.size * sizeof(array.elements));

    for (int i = 0; i < array.size; i++) {
        printf("Digite o valor do elemento %d!\n", i + 1);
        scanf("%d", &array.elements[i]);
        fflush(stdin);
    }

    for (int i = 0; i < array.size; i++) {
        printf("\nElemento do Vetor na posicao %d: ", i + 1);
        printf("%d", array.elements[i]);
    }

}
