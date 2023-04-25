#include <stdio.h>
#include <stdlib.h>

void main () {
  int arraySize, *array;

  printf("Digite o tamanho do vetor: \n");
  scanf("%d", &arraySize);

  array = (int*) malloc (arraySize * sizeof(int));

  for (int i = 0; i < arraySize; i++) {
    printf("Digite o valor do elemento %d: \n", i + 1);
    scanf("%d", &array[i]);
  }

  int big = 0;

  for (int i = 0; i < arraySize; i++) {
    if (i > 0) {
      if (big < array[i]) big = array[i];
      continue;
    }
    big = array[i];
  }
  free(array);
  printf("\nO maior valor do array é: %d", big);
}
