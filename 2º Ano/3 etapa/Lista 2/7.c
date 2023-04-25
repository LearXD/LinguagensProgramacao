#include <stdio.h>

typedef struct {
    char name[30];
    char office[30];
    int wage;
} Worker;

int getAverageWage (Worker workers[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += workers[i].wage;
    }
    return total / size;
}

void main () {
    int size;

    printf("Digite a quantidade de contas para registrar: \n");
    scanf("%d", &size);
    fflush(stdin);

    Worker workers[size];


    for (int i = 0; i < size; i++) {
        printf("Digite as informacoes da conta %d:\n", i + 1);

        printf("Digite o nome da trabalhador:\n");
        fgets(workers[i].name, sizeof(workers[i].name), stdin);

        printf("Digite o cargo do trabalhador:\n");
        fgets(workers[i].office, sizeof(workers[i].office), stdin);

        printf("Digite o salario do trabalhador:\n");
        scanf("%d", &workers[i].wage);
        fflush(stdin);
    }

    printf("A media salarial e de: %d...", getAverageWage(workers, size));
}
