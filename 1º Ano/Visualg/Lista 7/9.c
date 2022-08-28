#include <stdio.h>

void main() {
	int alunos;
	int alunas;
	
	printf("Digite a quantidade de alunos na sala:\n");
	scanf("%d", &alunos);
	
	printf("Digite a quantidade de alunas na sala:\n");
	scanf("%d", &alunas);
	
	if(alunos > alunas) {
		printf("O maior numero alunos e: %d\n", alunos);
		printf("O maior numero alunas e: %d\n", alunas);
	} else {
		printf("O maior numero alunas e: %d\n", alunas);
		printf("O maior numero alunos e: %d\n", alunos);
	}

}
