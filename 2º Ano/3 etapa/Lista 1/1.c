#include <stdio.h>

typedef struct {
    char name[255];
    int age;
    char address[255];
} Data;

void main () {
    Data person;

    printf("Digite o seu nome:\n");
    fgets(person.name, sizeof(person.name), stdin);

    printf("Digite sua idade:\n");
    scanf("%d", &person.age);
    fflush(stdin);

    printf("Digite o seu endereco:\n");
    fgets(person.address, sizeof(person.address), stdin);

    printf("\nSeus Dados\n");
    printf("Seu nome: %s", person.name);
    printf("Sua idade: %d\n", person.age);
    printf("Seu endereco: %s", person.address);
}
