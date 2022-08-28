#include <stdio.h>

void main() {
	int n, i;
	printf("Digite um numero inteiro:\n");
	scanf("%d", &n);

	for(i = 1; i <= 6; i++) {
		printf("%d x %d = %d\n", n, i, n * i);
	}

}
