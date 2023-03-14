#include <stdio.h>
#include <string.h>

#define SIZE 2

typedef struct {
    char name[30];
    int age;
    int telephone;
} Person;

int overAge (Person people[], int age) {
    int count = 0;
    for ( int i = 0; i < SIZE; i++) {
        if(people[i].age > age) count ++;
    }
    return count;
}

void main () {
    Person people[SIZE];
    int age;

    printf("Digite a idade para comparar:\n");
    scanf("%d", &age);
    fflush(stdin);

    for ( int i = 0; i < SIZE; i++) {
        printf("Digite o nome da pessoa: \n");
        fgets(people[i].name, sizeof(people[i].name), stdin);

        printf("Digite a idade da pessoa: \n");
        scanf("%d", &people[i].age);
        fflush(stdin);

        printf("Digite o telefone da pessoa: \n");
        scanf("%d", &people[i].telephone);
        fflush(stdin);
    }

    printf("Existem %d pessoas com mais de %d anos!", overAge(people, age), age);
}
