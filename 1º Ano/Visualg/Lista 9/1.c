/*
 * Author: Miguel Silva Pinheiro
 * Obs: Eu poderia fazer o este programa sem vetores,
 * mas como na questão é pedido que faça com vetores,
 * assim foi feito!
*/

#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "Portuguese");

	int i, data[2] = {-1, -1}, numbers[5];

	for(i = 0; i < 5; ++i) {
		printf("Digite um numero para a posição %d!\n", i);
		scanf("%d", &numbers[i]);
	}
	
	for(i = 0; i < 5; ++i) {
		if(numbers[i] > data[1]) {
			data[1] = numbers[i];
			data[0] = i;
		}
	}
	
	printf("O maior numero foi '%d', na posicao '%d' do vetor!", data[1], data[0]);
}
