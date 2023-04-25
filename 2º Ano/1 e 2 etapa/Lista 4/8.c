#include <stdio.h>
#include <stdlib.h>

int * alloc_memory (int *pointer, int count, size_t  bytes) {
    pointer = (int*) malloc(count * bytes);
    return pointer;
}

void main () {
    int *pointer;
    pointer = alloc_memory(pointer, 5, sizeof(int));
    printf("\nPonteiro: %p", pointer);
    free(pointer);
    printf("\nPonteiro Limpo: %p", pointer);
}

