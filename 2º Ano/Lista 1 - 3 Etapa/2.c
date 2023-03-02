#include <stdio.h>
#define SIZE 5

typedef struct {
    char name[255];
    int registration;
    char course[255];
} Student;

void main () {
    Student students[SIZE];

    for(int i = 0; i < SIZE; i++) {
        printf("Digite o nome do estudante n%d\n", i + 1);
        fgets(students[i].name, sizeof(students[i].name), stdin);

        printf("Digite a matricula do estudante n%d\n", i + 1);
        scanf("%d", &students[i].registration);
        fflush(stdin);

        printf("Digite o curso do estudante n%d\n", i + 1);
        fgets(students[i].course, sizeof(students[i].course), stdin);
    }

    printf("\nESTUDANTES CADASTRADOS:\n");

    for(int i = 0; i < SIZE; i++) {
        Student student = students[i];
        printf("Estudante n%d:\n", i + 1);
        printf("\tNome: %s", student.name);
        printf("\tMatricula: %d\n", student.registration);
        printf("\tMatricula: %s", student.course);
    }
}
