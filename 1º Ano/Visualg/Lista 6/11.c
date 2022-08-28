#include <stdio.h>

void main() {
	
	int nascimento, atual;
	
	printf("Digite o ano do nascimento!\n");
	scanf("%d", &nascimento);
	
	printf("Digite o ano atual!\n");
	scanf("%d", &atual);
	
	printf("Voce tem aproximadamente %d anos!\n", atual - nascimento);
	printf("Voce tera aproximadamente %d anos em 2050!\n", 2050 - nascimento);
}
