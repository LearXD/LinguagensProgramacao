#include <stdio.h>

void main() {
	
	int n, i;
	
	printf("Digite o numero:\n");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		if(i % 2 != 0) {
			printf("%d\n", i);
		}
	}
	
}
