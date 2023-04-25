#include <stdio.h>
#include <stdlib.h>

void main () {
  float *array;

  array = (float*) malloc (5 * sizeof(float));
  
  for (int i = 0; i < 5; i++) {
    printf("Digite o valor do elemento %d: \n", i + 1);
    scanf("%f", &array[i]);
  }

  for (int i = 5; i > 0; i--) {
    printf("\nO valor do elemento %d é: %f", i, array[i-1]);
  }

  free(array); //BRUH, ASSIM QUE O PROGRAMA PARAR ELE VAI LIMPAR A MEMORIA MESMO
}