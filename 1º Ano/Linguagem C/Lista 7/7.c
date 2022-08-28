#include <stdio.h>

void main() {
	int l1, a1, l2, a2;
	
	printf("Digite o lado do retangulo 1:\n");
	scanf("%d", &l1);
	
	printf("Digite a altura do retangulo 1:\n");
	scanf("%d", &a1);
	
	printf("Digite o lado do retangulo 2:\n");
	scanf("%d", &l2);
	
	printf("Digite a altura do retangulo 2:\n");
	scanf("%d", &a2);
	
	printf("A area do primeiro retangulo e: %d\n", l1 * a1);
	printf("A area do segundo retangulo e: %d\n", l2 * a2);
	
	if((l1 * a1) ==  (l2 * a2)) {
		printf("A area dos retangulos sao iguais!\n");
	} else if((l1 * a1) > (l2 * a2)) {
		printf("A area do primeiro retangulo e maior!\n");
	} else {
		printf("A area do segundo retangulo e maior!\n");
	}

}
