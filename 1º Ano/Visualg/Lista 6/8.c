#include <stdio.h>
#include <math.h>

void main() {
	
	/*
	* RESOLVI FAZER COM WHILE INFINITO PRA FICAR MAIS INTERATIVO!
	*/
	while (1) {
		unsigned int numero;
		
		printf("Digite um numero maior que 0:\n");
		scanf("%d", &numero);
	
		if( numero > 0) {
			printf("Numero ao quadrado %.1f\n", pow(numero, 2));
			printf("Numero ao cubo %.1f\n", pow(numero, 3));
			printf("Raiz quadrada do nuero %.1f\n", sqrt(numero));
			printf("Raiz cubica do numero %.1f\n\n", pow(numero, (1.0/3.0) ));
		} else {
			printf("Digite apenas um numero maior que 0:\n\n");
		}
	}
	
}
