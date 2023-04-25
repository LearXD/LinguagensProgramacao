#include <stdio.h>
#include <stdlib.h>

#define EOL '\n'

int main() {
    FILE * file = fopen("arquivo.txt", "wb");

    printf("Digite alguma coisa:\n");
    char character;
    while((character = getchar()) != EOF) {
        fputc(character, file);
    }

    fclose(file);
    file = fopen("arquivo.txt", "rb");

    int linhas = 1;

    while((character = fgetc(file)) != EOF) {
        printf("%d ", character);
        if(character == '\n') {
            linhas++;
        }
    }

    printf("Seu arquivo tem %d linhas", linhas);
}
