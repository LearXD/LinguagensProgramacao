/*
 * Author: Miguel Silva Pinheiro
 * to: IFMG
*/


#include <stdio.h>

main(void) {
	
	int number, i;
	
	printf("Digite um numero inteiro\n");
	scanf("%d", &number);
	
	if(!(number) || number <= 0) {
		return printf("Digite um numero positivo...\n");
	}
	
	for (i=0; i < number; i++) {
		if( i % 2 != 0) {
			printf("%d ", i);
		}
	}
}
