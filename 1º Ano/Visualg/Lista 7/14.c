#include <stdio.h>

void main() {
	
	int i;
	
	int total = 0;
	int media = 0;
	
	//VOU DEIXAR -1 POIS SEI QUE NENHUMA NOTA PODE SER NEGATIVA, LOGO POSSO FAZER AS CONDIÇÃO NECESSARIAS...
	int maior = -1;
	int menor = -1; 
	
	int temp; // VARIAVEL PARA ALOCAÇÃO TEMPORARIA
	
	for (i = 1; i <= 10; i++) {
		printf("Digite a nota numero %d:\n", i);
		scanf("%d", &temp);
		total = total + temp;
		
		if(maior == -1) {
			maior = temp;
		} else if(maior < temp){
			maior = temp;
		}
		
		if(menor == -1) {
			menor = temp;
		} else if(menor > temp){
			menor = temp;
		}
	}
	
	printf("Soma das notas: %d\n", total);
	printf("Media das notas: %d\n", total / 10);
	printf("Maior nota: %d\n", maior);
	printf("Menor nota: %d\n", menor);
}
