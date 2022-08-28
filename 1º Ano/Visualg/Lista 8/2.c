/*
 * Author: Miguel Silva Pinheiro
 * to: IFMG
*/

#include <stdio.h>

void main() {
	
	int year = 1996;
	float purse = 1000.0;
	float percentage = 1.5;
	
	while (year <= 2000) {
		purse = purse * ((percentage / 100) + 1);
		percentage *= 2;
		year++;
	}
	
	printf("O salario em %d foi de %.2f R$", 2000, purse);
}
