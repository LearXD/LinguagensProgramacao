#include <stdio.h>

void main() {
	
	int mes;
	
	printf("Digite o numero do mes:\n");
	scanf("%d", &mes);
	
	switch(mes) {
		case 1:
		printf("O mes referente ao numero e: Janeiro");
		break;
		case 2:
		printf("O mes referente ao numero e: Fevereiro");
		break;
		case 3:
		printf("O mes referente ao numero e: Marco");
		break;
		case 4:
		printf("O mes referente ao numero e: Abril");
		break;
		case 5:
		printf("O mes referente ao numero e: Maio");
		break;
		case 6:
		printf("O mes referente ao numero e: Junho");
		break;
		case 7:
		printf("O mes referente ao numero e: Julho");
		break;
		case 8:
		printf("O mes referente ao numero e: Agosto");
		break;
		case 9:
		printf("O mes referente ao numero e: Setembro");
		break;
		case 10:
		printf("O mes referente ao numero e: Outubro");
		break;
		case 11:
		printf("O mes referente ao numero e: Novembro");
		break;
		case 12:
		printf("O mes referente ao numero e: Dezembro");
		break;
		default:
			printf("Nao existe mes referente ao numero");
			break;
	}

}
