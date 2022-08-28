#include <stdio.h>

void main() {
	int nascimento, atual;
	
	printf("Digite o ano do seu nascimento:\n");
	scanf("%d", &nascimento);
	
	printf("Digite o ano atual:\n");
	scanf("%d", &atual);
	
	printf("Voce possui aproximadamente %d anos!\n", atual - nascimento);
	printf("Voce possui aproximadamente %d meses!\n", (atual - nascimento) * 12);
	printf("Voce possui aproximadamente %d dias!\n", (atual - nascimento) * 365);
	printf("Voce possui aproximadamente %d semanas!\n", ((atual - nascimento) * 12) * 4);
	
}
