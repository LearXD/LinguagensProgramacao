/*
 * Author: Miguel Silva Pinheiro
 * to: IFMG
*/

#include <stdio.h>

void main() {
	
	int i;
	
	int maiorNumero = 0;
	int menorNumero = 0;
	
	// VARIVEL COM -1 PARA DIFERENCIAR
	float maiorAltura = -1.0;
	float menorAltura = -1.0;
	
	// VARIVEL TEMP PARA ARMAZENAR DADOS TEMPORARIAMENTE :D
	int tempNumero = 0;
	float tempAltura = 0;
	
	
	for(i = 0; i < 10; i++) {
		printf("Digite o numero do aluno:\n");
		scanf("%d", &tempNumero);
		
		printf("Digite a altura do aluno:\n");
		scanf("%f", &tempAltura);
		
		if(tempAltura > maiorAltura) {
			maiorAltura = tempAltura;
			maiorNumero = tempNumero;
		}
		
		// USANDO SIMBOLOS DE PARAMENTAÇÃO COMO EXECUTOR
		// CONDIÇÃO && (CODIGO A SER EXECUTADO)
		menorAltura == -1 && (menorAltura = tempAltura);
		
		if(tempAltura < menorAltura ) {
			menorAltura = tempAltura;
			menorNumero = tempNumero;
		}
	}
	
	printf("A maior altura foi do aluno %d, com %.2f metros!", maiorNumero, maiorAltura);
	printf("A menor altura foi do aluno %d, com %.2f metros!", menorNumero, menorAltura);
}
