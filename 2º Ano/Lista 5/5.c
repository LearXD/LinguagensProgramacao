#include <stdio.h>

int isCharacter(char ch) {
    return ((ch >= 'a' && ch <= 'z') ||
            (ch >= '0' && ch <= '9'));
}

int isSpace(char ch) {
    return (ch == ' ');
}

void main () {
    char string[90];

    printf("\nDigite sua frase:");
    fgets(string, sizeof(string), stdin);

    int hasSpaced = 1;
    int words = 0;

    for (int i = 0; string[i] != '\0'; i++) {
        if(isSpace(string[i])) {
            hasSpaced = 1;
            continue;
        }

        if(hasSpaced && isCharacter(string[i])) {
            words++;
            hasSpaced = 0;
            continue;
        }
    }

    printf("A frase possui %d palavras", words);
}


