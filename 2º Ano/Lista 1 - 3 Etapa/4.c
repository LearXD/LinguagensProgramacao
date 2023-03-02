#include <stdio.h>

typedef struct {
    int sector;
    char held[31];
    int wage;
} Work;

typedef struct {
    char name[255];
    int age;
    char sex;
    char cpf[15];
    char birth[11];
    Work work;
} Worker;


void main () {
    Worker worker;

    printf("Digite o nome do funcionario:\n");
    fgets(worker.name, sizeof(worker.name), stdin);

    printf("Digite a idade do funcionario:\n");
    scanf("%d", &worker.age);
    fflush(stdin);

    printf("Digite o sexo do funcionario (M/F):\n");
    scanf("%c", &worker.sex);
    fflush(stdin);

    printf("Digite o CPF do funcionario (com marcacao):\n");
    scanf("%s", &worker.cpf);
    fflush(stdin);

    printf("Digite a data de nascimento do funcionario (DD/MM/YYYY):\n");
    scanf("%s", &worker.birth);
    fflush(stdin);

    printf("Digite o setor do funcionario (0-99): \n");
    scanf("%d", &worker.work.sector);
    fflush(stdin);

    while(!(worker.work.sector >= 0 && worker.work.sector <= 99)) {
        printf("Digite o setor do funcionario (0-99): \n");
        scanf("%d", &worker.work.sector);
        fflush(stdin);
    }

    printf("Digite o cargo do funcionario:\n");
    fgets(worker.work.held, sizeof(worker.work.held), stdin);

    printf("Digite o salario do funcionario:\n");
    scanf("%d", &worker.work.wage);
    fflush(stdin);

    printf("\nDADOS DO FUNCIONARIO\n");
    printf("Nome: %s", worker.name);
    printf("Idade: %d\n", worker.age);
    printf("Sexo: %c\n", worker.sex);
    printf("CPF: %s\n", worker.cpf);
    printf("Nascimento: %s\n", worker.birth);
    printf("\nDADOS DO TRABALHO DO FUNCIONARIO\n");
    printf("Setor: %d\n", worker.work.sector);
    printf("Cargo: %s", worker.work.held);
    printf("Salario: %d", worker.work.wage);
}
