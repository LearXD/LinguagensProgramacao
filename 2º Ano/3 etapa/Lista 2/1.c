#include <stdio.h>
#include <string.h>

#define SIZE 2

typedef struct {
    char title[20];
    char author[20];
    int date;
} Book;

int getAfter(Book books[], int date) {
    int count = 0;
    for (int i = 0; i < SIZE; i++) {
        if(books[i].date < date) {
            count++;
        }
    }
    return count;
}

void main () {
    Book books[SIZE];
    int date;

    printf("Digite a data que deseja comparar:\n");
    scanf("%d", &date);
    fflush(stdin);

    for (int i = 0; i < SIZE; i++) {
        printf("Digite o titulo do livro:\n");
        fgets(books[i].title, sizeof(books[i].title), stdin);

        printf("Digite o autor do livro:\n");
        fgets(books[i].author, sizeof(books[i].author), stdin);

        printf("Digite o ano de publicacao do livro:\n");
        scanf("%d", &books[i].date);
        fflush(stdin);
    }

    printf("Foram publicados %d livros ates de %d!", getAfter(books, date), date);
}
