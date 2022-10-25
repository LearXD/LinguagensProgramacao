#include <stdio.h>
#include <stdlib.h>

void main () {
    int *pointer;
    alloc_memory(pointer, 5, sizeof(int));
    printf("\nPonteiro: %p", pointer);
    free(pointer);
    printf("\nPonteiro Limpo: %p", pointer);
}

void alloc_memory (int *pointer, int count, size_t  bytes) {
    pointer = (int*) malloc(count * bytes);
}
