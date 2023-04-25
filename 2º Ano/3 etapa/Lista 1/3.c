#include <stdio.h>
#define SIZE 5

typedef struct {
    int first;
    int second;
    int third;
} Grades;

typedef struct {
    int registration;
    char name[255];
    Grades grades;
} Student;

typedef struct {
    int index;
    int grade;
} GradeData;

void main () {
    Student students[SIZE];

    for(int i = 0; i < SIZE; i++) {
        printf("Digite a matricula do estudante n%d\n", i + 1);
        scanf("%d", &students[i].registration);
        fflush(stdin);

        printf("Digite o nome do estudante n%d\n", i + 1);
        fgets(students[i].name, sizeof(students[i].name), stdin);

        printf("Digite a PRIMEIRA nota do estudante n%d\n", i+1);
        scanf("%d", &students[i].grades.first);
        fflush(stdin);

        printf("Digite a SEGUNDA nota do estudante n%d\n", i+1);
        scanf("%d", &students[i].grades.second);
        fflush(stdin);

        printf("Digite a TERCEIRA nota do estudante n%d\n", i+1);
        scanf("%d", &students[i].grades.third);
        fflush(stdin);
    }

    printf("\nDADOS ENCONTRADOS\n");

    GradeData highestGrade = {0, students[0].grades.first};
    GradeData highestAverageGrade = {0, students[0].grades.first};
    GradeData lowestAverageGrade = {0, students[0].grades.first};

    for (int i = 0; i < SIZE; i++) {
        if(highestGrade.grade < students[i].grades.first) {
            highestGrade.grade = students[i].grades.first;
            highestGrade.index = i;
        }

        int average = (students[i].grades.first + students[i].grades.second + students[i].grades.third) / 3;
        if(highestAverageGrade.grade < average) {
            highestAverageGrade.index = i;
            highestAverageGrade.grade = average;
        }
        if(lowestAverageGrade.grade > average) {
            lowestAverageGrade.index = i;
            lowestAverageGrade.grade = average;
        }
    }

    printf("A maior das PRIMEIRAS notas foi %d, do aluno: %s", highestGrade.grade, students[highestGrade.index].name);
    printf("A maior das medias foi %d, do aluno: %s", highestAverageGrade.grade, students[highestAverageGrade.index].name);
    printf("A menor das medias foi %d, do aluno: %s", lowestAverageGrade.grade, students[lowestAverageGrade.index].name);
}
