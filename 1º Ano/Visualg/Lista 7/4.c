#include <stdio.h>

void main() {
	int n1, n2;
	printf("Digite o primeiro numero:\n");
	scanf("%d", &n1);
	printf("Digite o segundo numero\n");
	scanf("%d", &n2);
	
	printf("Soma: %d\n", n1 + n2);
	printf("Subtracao: %d\n", n1 - n2);
	printf("Produto: %d\n", n1 * n2);
	printf("Divisao: %d\n", n1 / n2);
	printf("Media: %d\n", (n1 + n2) / 2);
}
