#include <stdio.h>

void main() {
	int i1, i2;
	printf("Digite a idade de Pedro:\n");
	scanf("%d", &i1);
	
	printf("Digite a idade de Joana:\n");
	scanf("%d", &i2);

	printf("A maior idade e %d", i2 > i1 ? i2 : i1);

}
