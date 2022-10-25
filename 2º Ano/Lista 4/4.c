#include <stdio.h>
#include <stdlib.h>

void main () {

  float *array;
  int vectorSize = 2;

  array = (float*) malloc (vectorSize * sizeof(float));

  for (int i = 0; i < vectorSize; i++) {
    printf("Digite o valor do elemento %d: \n", i + 1);
    scanf("%f", &array[i]);
  }

  float sum = 0;

  for (int i = 0; i < vectorSize; i++) {
    sum += array[i];
  }

  free(array);
  printf("\nA media aritmética é: %.2f", sum/vectorSize);
}
